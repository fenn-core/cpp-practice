cmake_minimum_required(VERSION 4.2)
project(C___prac)

set(CMAKE_CXX_STANDARD 20)

add_executable(C___prac src/main.cpp
        src/vec2.cpp
        src/floatarray.cpp
        includes/floatarray.hpp
        src/main.cpp
)

target_include_directories(C___prac PRIVATE includes)
