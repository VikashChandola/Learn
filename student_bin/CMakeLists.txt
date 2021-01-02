cmake_minimum_required(VERSION 3.16.0)
project(directory_test)
include_directories(include)
file(GLOB SOURCES "src/*.cpp")

set(PROJECT_LINK_LIBS libstudent.so)
link_directories(/home/vchandola/yocto/playground/Learn/build/shared_lib)
include_directories(/home/vchandola/yocto/playground/Learn/student_shared_lib/include)

add_executable(student ${SOURCES})
target_link_libraries(student ${PROJECT_LINK_LIBS})
