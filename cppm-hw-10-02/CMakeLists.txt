cmake_minimum_required(VERSION 3.22.0)
project(myProject)
add_executable(cppm-hw-10-02 cppm-hw-06-03.cpp)

add_library(figure STATIC  figure.h figure.cpp)
add_library(quadrangles STATIC quadrangles.h quadrangles.cpp)
add_library(triangles STATIC triangles.h triangles.cpp)

target_link_libraries(cppm-hw-10-02 PRIVATE figure)

target_link_libraries(cppm-hw-10-02 PRIVATE quadrangles)
target_link_libraries(quadrangles PUBLIC figure)

target_link_libraries(cppm-hw-10-02 PRIVATE triangles)
target_link_libraries(triangles PUBLIC figure)