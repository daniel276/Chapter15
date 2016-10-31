cmake_minimum_required(VERSION 3.6)
project(Chapter15)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        main.cpp
        1.cpp
        1.h 2.cpp 2.h 3.cpp 3.h 6.cpp 6.h 7.cpp 7.h)
add_executable(Chapter15 ${SOURCE_FILES})
add_executable(1 1.cpp 1.h)
add_executable(2 2.cpp 2.h)
add_executable(3 3.cpp 3.h)
add_executable(6 6.cpp 6.h)
add_executable(7 7.cpp 7.h)