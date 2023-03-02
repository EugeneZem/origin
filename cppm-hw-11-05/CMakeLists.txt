cmake_minimum_required(VERSION 3.22.0)
project(myProject)

add_library(figures SHARED triangles.h triangles.cpp quadrangles.h quadrangles.cpp figure.h figure.cpp)

add_executable(cppm-hw-11-05 cppm-hw-06-03.cpp)

target_link_libraries(cppm-hw-11-05 figures)
