cmake_minimum_required(VERSION 3.16.0)
project(directory_test)
include_directories(include)
file(GLOB SOURCES "src/*.cpp")
add_executable(student ${SOURCES})
