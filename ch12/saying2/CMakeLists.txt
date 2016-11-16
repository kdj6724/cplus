cmake_minimum_required (VERSION 3.6)
project (Saying2)
 
# add the executable
add_library(Libs string1.cc)

add_executable(sayings saying2.cc)
target_link_libraries(sayings Libs)
