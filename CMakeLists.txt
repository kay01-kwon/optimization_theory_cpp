cmake_minimum_required(VERSION 3.12)
project(custom_nls)

set(CMAKE_CXX_STANDARD 11)

include_directories(
    include
)

add_executable(custom_nls
    src/main.cpp
)
