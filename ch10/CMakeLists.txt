cmake_minimum_required (VERSION 3.6)
project (Randwalk)
 
# add the executable
add_library(VectLibs vect.cpp)

add_executable(Randwalk randwalk.cpp)
target_link_libraries(Randwalk VectLibs)
