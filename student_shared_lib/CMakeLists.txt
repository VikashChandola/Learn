cmake_minimum_required(VERSION 3.16.0)
project(shared_object)
include_directories(include)
file(GLOB SOURCES "src/*.cpp")
add_library(student SHARED ${SOURCES})
install(TARGETS student DESTINATION /lib)
