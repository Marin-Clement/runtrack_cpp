cmake_minimum_required(VERSION 3.22)
project(runtrack_cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(Day1/Job1)

add_executable(runtrack_cpp
        Day1/Job1/HelloWorld.cpp
        Day1/Job1/HelloWorld.h)