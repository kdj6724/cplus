cmake_minimum_required (VERSION 3.6)
project (tenn)
 
# add the executable
add_library(Libs tabtenn1.cpp)

add_executable(tenn usett1.cpp)
target_link_libraries(tenn Libs)
