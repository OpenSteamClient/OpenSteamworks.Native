cmake_minimum_required(VERSION 3.5)
project(opensteamclient LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE MinSizeRel)

include("cmake/idesupport.cmake")

file(GLOB_RECURSE audiostub_sources CONFIGURE_DEPENDS "audiostub/*.cpp")
file(GLOB_RECURSE protobufhack_sources CONFIGURE_DEPENDS "protobufhack/*.cpp")
file(GLOB protobufhack_include_cc CONFIGURE_DEPENDS "protobufhack/generated/*.cc")
file(GLOB protobufhack_include_h CONFIGURE_DEPENDS "protobufhack/generated/*.h")

# Stop .exp, .lib, .dll.a and various other unneeded files from manifesting
# (Can't do this, it breaks the build due to MingW depending on a .lib existing even for a simple exe file. WTF?)
# Let's just filter these out in the bootstrap phase.
# unset(CMAKE_IMPORT_LIBRARY_SUFFIX)

if (MSVC)
    # Don't worry, doesn't use debug configuration even though it says debug, it picks one automatically
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
endif()

if (BUILD_PLATFORM_TARGET STREQUAL "linux")
    if (BUILD_ARCH STREQUAL "x64" OR DEFINED IDE_BUILD)
        add_executable(reaper ${PROJECT_SOURCE_DIR}/reaper/main.cpp)
        add_executable(steam-launch-wrapper ${PROJECT_SOURCE_DIR}/launchwrapper/main.cpp)

        # 64-bit steam service stub
        add_library(steamservice SHARED ${PROJECT_SOURCE_DIR}/fakeservice/main.cpp)
        execute_process(COMMAND objdump -s -j .valvesig ${CMAKE_BINARY_DIR}/CMakeFiles/steamservice.dir/fakeservice/main.cpp.o RESULT_VARIABLE ret)
        if(ret EQUAL "1")
            # Segment doesn't exist
            add_custom_command(
                TARGET steamservice
                PRE_LINK
                COMMAND objcopy --add-section .valvesig=${PROJECT_SOURCE_DIR}/dummysig --set-section-flags .valvesig=readonly ${CMAKE_BINARY_DIR}/CMakeFiles/steamservice.dir/fakeservice/main.cpp.o ${CMAKE_BINARY_DIR}/CMakeFiles/steamservice.dir/fakeservice/main.cpp.o)
        endif()

        set_target_properties(steamservice PROPERTIES PREFIX "")

        add_library(bootstrappershim64 SHARED ${PROJECT_SOURCE_DIR}/bootstrappershim/main.cpp)

        include("cmake/protobuf_external.cmake")
        add_library(protobufhack SHARED ${protobufhack_include_cc} ${protobufhack_sources})
        # Another CMake L. Can't actually even set the release type per project. Why???????
        #set_target_properties(protobufhack PROPERTIES BUILD_TYPE Release)
        set_target_properties(protobufhack PROPERTIES CXX_STANDARD 14)
        target_include_directories(protobufhack PRIVATE ${CMAKE_CURRENT_BINARY_DIR})
        target_link_libraries(protobufhack ${Protobuf_LIBRARIES})
    endif()

    if (BUILD_ARCH STREQUAL "x86" OR DEFINED IDE_BUILD)
        # Needed for VAC, Proton
        add_executable(steamserviced ${PROJECT_SOURCE_DIR}/serviced/main.cpp)
        set_ide_32bit_build(steamserviced)

        # Damn CMake is really powerful (said no-one ever)
        # This is terrible and relies on internal CMake folder hierarchy
        execute_process(COMMAND objdump -s -j .valvesig ${CMAKE_BINARY_DIR}/CMakeFiles/steamserviced.dir/serviced/main.cpp.o RESULT_VARIABLE ret)
        if(ret EQUAL "1")
            # Segment doesn't exist
            add_custom_command(
                TARGET steamserviced
                PRE_LINK
                COMMAND objcopy --add-section .valvesig=${PROJECT_SOURCE_DIR}/dummysig --set-section-flags .valvesig=readonly ${CMAKE_BINARY_DIR}/CMakeFiles/steamserviced.dir/serviced/main.cpp.o ${CMAKE_BINARY_DIR}/CMakeFiles/steamserviced.dir/serviced/main.cpp.o)
        endif()
        # add_custom_command(
        #     TARGET steamserviced
        #     PRE_LINK
        #     COMMAND objcopy --add-section .valvesig=${PROJECT_SOURCE_DIR}/dummysig --set-section-flags .valvesig=readonly ${CMAKE_BINARY_DIR}/CMakeFiles/steamserviced.dir/serviced/main.cpp.o ${CMAKE_BINARY_DIR}/CMakeFiles/steamserviced.dir/serviced/main.cpp.o)

        add_library(bootstrappershim32 SHARED ${PROJECT_SOURCE_DIR}/bootstrappershim/main.cpp)
        set_ide_32bit_build(bootstrappershim32)

        add_library(audio SHARED ${audiostub_sources})
        set_ide_32bit_build(audio)
    endif()
endif()

if (BUILD_PLATFORM_TARGET STREQUAL "win")
    if (BUILD_ARCH STREQUAL "x64" OR DEFINED IDE_BUILD)
        include("cmake/protobuf_external.cmake")
        add_library(protobufhack SHARED ${protobufhack_include_cc} ${protobufhack_sources})
        set_target_properties(protobufhack PROPERTIES CXX_STANDARD 14)
        target_include_directories(protobufhack PRIVATE ${CMAKE_CURRENT_BINARY_DIR})
        target_link_libraries(protobufhack ${Protobuf_LIBRARIES})
    endif()

    if (BUILD_ARCH STREQUAL "x86" OR DEFINED IDE_BUILD)
        # Needed for VAC
        add_executable(steamserviced ${PROJECT_SOURCE_DIR}/serviced/main.cpp)
    endif()
endif()

if (BUILD_PLATFORM_TARGET STREQUAL "osx")
    if (BUILD_ARCH STREQUAL "x64" OR DEFINED IDE_BUILD)
        # MacOS steam has the luxury of having a 64-bit steamservice
        # add_executable(steamserviced ${PROJECT_SOURCE_DIR}/serviced/main.cpp)

        # include("cmake/protobuf_external.cmake")
        # add_library(protobufhack SHARED ${protobufhack_include_cc} ${protobufhack_sources})
        # set_target_properties(protobufhack PROPERTIES BUILD_TYPE Release)
        # set_target_properties(protobufhack PROPERTIES CXX_STANDARD 14)
        # target_include_directories(protobufhack PRIVATE ${CMAKE_CURRENT_BINARY_DIR})
        # target_link_libraries(protobufhack ${Protobuf_LIBRARIES})
    endif()

    if (BUILD_ARCH STREQUAL "x86" OR DEFINED IDE_BUILD)
        # No 32-bit natives on macos
    endif()

    if (BUILD_ARCH STREQUAL "arm64" OR DEFINED IDE_BUILD)
        add_executable(steam-launch-wrapper ${PROJECT_SOURCE_DIR}/launchwrapper/main.cpp)
    endif()
endif()

if (NOT DEFINED IDE_BUILD)
    # Save build timestamp to file
    string(TIMESTAMP UNIX_TIMESTAMP "%s")
    file(WRITE ${NATIVE_OUTPUT_FOLDER}/../build_timestamp ${UNIX_TIMESTAMP})
endif()
