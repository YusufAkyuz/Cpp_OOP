cmake_minimum_required(VERSION 3.27)
project(Test)

set(CMAKE_CXX_STANDARD 17)

add_executable(Test main.cpp
        Person.cpp
        Person.h
        Person.h
        Student.cpp
        Student.h
        Employee.cpp
        Employee.h
)
