cmake_minimum_required (VERSION 3.6)
project (bank)
 
# add the executable
add_library(Libs queue.cpp)

add_executable(bank bank.cpp)
target_link_libraries(bank Libs)
