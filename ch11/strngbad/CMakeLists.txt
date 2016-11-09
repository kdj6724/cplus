cmake_minimum_required (VERSION 3.6)
project (Vegnews)
 
# add the executable
add_library(Libs vegnews.cpp)

add_executable(Strng strngbad.cpp)
target_link_libraries(Strng Libs)
