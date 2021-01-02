cmake_minimum_required(VERSION 3.16.0)
project(hello)
add_executable(hello helloworld.cpp)
install(TARGETS hello DESTINATION /usr/bin)
