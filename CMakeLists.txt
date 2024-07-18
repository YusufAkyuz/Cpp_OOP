cmake_minimum_required(VERSION 3.26)
project(Cpp_Projects)

set(CMAKE_CXX_STANDARD 14)

include_directories(OOP6)

add_executable(Cpp_Projects
        OOP6/cmake-build-debug/Testing/Temporary/LastTest.log
        OOP6/cmake-build-debug/build.ninja
        OOP6/cmake-build-debug/cmake_install.cmake
        OOP6/cmake-build-debug/CMakeCache.txt
        OOP6/cmake-build-debug/Makefile
        OOP6/cmake-build-debug/Part1Review
        OOP6/cmake-build-debug/Part1Review.cbp
        OOP6/CMakeLists.txt
        OOP6/Column.cpp
        OOP6/Column.h
        OOP6/main.cpp)
