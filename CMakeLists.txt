cmake_minimum_required(VERSION 3.14)


project(dotproduct)

#include_directories(/usr/include/eigen3)
# below for mingw64
#include_directories(\mingw64\include\eigen3)
include_directories(c:/msys64/mingw64/include/eigen3) #This is for Ninja
add_executable(dotproduct dotproduct.cpp)