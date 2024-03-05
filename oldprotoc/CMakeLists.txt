cmake_minimum_required(VERSION 3.25)
project(oldprotoc LANGUAGES CXX) 

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE MinSizeRel)

if (MSVC) 
    # Don't worry, doesn't use debug configuration even though it says debug, it picks one automatically
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
endif()

include("../cmake/protobuf_external.cmake")
add_custom_target(protoc_dep ALL DEPENDS ${Protobuf_PROTOC_EXECUTABLE})
add_custom_command(TARGET protoc_dep POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
        ${Protobuf_PROTOC_EXECUTABLE}
        ${PROJECT_BINARY_DIR}/
    DEPENDS ${Protobuf_PROTOC_EXECUTABLE})

add_dependencies(protoc_dep protobuf::protoc)