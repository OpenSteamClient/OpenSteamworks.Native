cmake_minimum_required(VERSION 3.25)
project(opensteamclient LANGUAGES CXX) 

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE MinSizeRel)

include("cmake/idesupport.cmake")

file(GLOB_RECURSE audiostub_sources CONFIGURE_DEPENDS "audiostub/*.cpp")
file(GLOB_RECURSE protobufhack_sources CONFIGURE_DEPENDS "protobufhack/*.cpp")
file(GLOB protobufhack_include_cc CONFIGURE_DEPENDS "protobufhack/generated/*.cc")
file(GLOB protobufhack_include_h CONFIGURE_DEPENDS "protobufhack/generated/*.h")
file(GLOB_RECURSE miniutl_sources CONFIGURE_DEPENDS "MiniUTL/*.cpp")
file(GLOB_RECURSE htmlhost_sources CONFIGURE_DEPENDS "htmlhost/*.cpp")

# Common SDL config options
set(SDL_TEST_LIBRARY OFF)

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
        set_target_properties(steamservice PROPERTIES PREFIX "")

        add_library(bootstrappershim64 SHARED ${PROJECT_SOURCE_DIR}/bootstrappershim/main.cpp)

        include("cmake/protobuf_external.cmake")
        add_library(protobufhack SHARED ${protobufhack_include_cc} ${protobufhack_sources})
        # Another CMake L. Can't actually even set the release type per project. Why???????
        #set_target_properties(protobufhack PROPERTIES BUILD_TYPE Release)
        set_target_properties(protobufhack PROPERTIES CXX_STANDARD 14)
        target_include_directories(protobufhack PRIVATE ${CMAKE_CURRENT_BINARY_DIR})
        target_link_libraries(protobufhack ${Protobuf_LIBRARIES})

        add_subdirectory(SDL)
        add_subdirectory(SDL_ttf)
    endif()

    if (BUILD_ARCH STREQUAL "x32" OR DEFINED IDE_BUILD)
        # Needed for VAC, Proton
        add_executable(steamserviced ${PROJECT_SOURCE_DIR}/serviced/main.cpp)
        set_ide_32bit_build(steamserviced)

        # htmlhost hosts steamwebhelper and chromehtml if the user wants it. Some games use it to display MOTDs
        add_executable(htmlhost ${htmlhost_sources} ${miniutl_sources})
        target_include_directories(htmlhost PRIVATE "MiniUTL")
        set_ide_32bit_build(htmlhost)

        # We hook getpid for htmlhost (on linux with LD_PRELOAD) so it thinks our steam process is the steam process and not itself (not really meant to be hosted)
        add_library(htmlhost_fakepid SHARED ${PROJECT_SOURCE_DIR}/htmlhost_fakepid/main.cpp)
        set_ide_32bit_build(htmlhost_fakepid)

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

        set(SDL3TTF_VENDORED ON)
        add_subdirectory(SDL)
        add_subdirectory(SDL_ttf)
    endif()

    if (BUILD_ARCH STREQUAL "x32" OR DEFINED IDE_BUILD)
        # Needed for VAC
        add_executable(steamserviced ${PROJECT_SOURCE_DIR}/serviced/main.cpp)

        # htmlhost hosts steamwebhelper and chromehtml if the user wants it. Some games use it to display MOTDs
        add_executable(htmlhost ${htmlhost_sources} ${miniutl_sources})
        target_include_directories(htmlhost PRIVATE "MiniUTL")
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

    if (BUILD_ARCH STREQUAL "x32" OR DEFINED IDE_BUILD)
        # No 32-bit natives on macos
    endif()

    if (BUILD_ARCH STREQUAL "ARM64" OR DEFINED IDE_BUILD)
        add_executable(steam-launch-wrapper ${PROJECT_SOURCE_DIR}/launchwrapper/main.cpp)
    endif()
endif()