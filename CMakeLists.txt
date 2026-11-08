cmake_minimum_required(VERSION 3.16)
project(shape_demo)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)

file(GLOB_RECURSE SOURCES "src/*.cpp")
add_executable(shape_demo ${SOURCES})

target_include_directories(shape_demo PRIVATE include)

