cmake_minimum_required(VERSION 3.0)
project("test")
# file(GLOB_RECURSE SOURCE "./*.cpp")
message(STATUS "caca: ${SOURCE_DIR}")
add_executable("test" main.cpp Student.cpp)