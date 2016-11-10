cmake_minimum_required (VERSION 3.6)
project (Vegnews)
 
# add the executable
add_library(Libs string1.cpp)

add_executable(sayings sayings1.cpp)
target_link_libraries(sayings Libs)
