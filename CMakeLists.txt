project(dotproduct)

#include_directories(/usr/include/eigen3)
# below for mingw64
include_directories(\mingw64\include\eigen3)
add_executable(dotproduct dotproduct.cpp)