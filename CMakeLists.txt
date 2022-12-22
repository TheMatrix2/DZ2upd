cmake_minimum_required(VERSION 3.24)
project(DZ3)

set(CMAKE_CXX_STANDARD 14)

include_directories(DZ3)

add_executable(runner
        sources/dz3.hpp sources/source.cpp sources/demo.cpp)