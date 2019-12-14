cmake_minimum_required(VERSION 3.15)
project(cpp_fundamentals)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)

add_executable(cpp_fundamentals main.cpp src/udemy_cpp_course/fundamentals/operators.cpp src/udemy_cpp_course/fundamentals/operators.h)

#add_executable(cpp_fundamentals ${SOURCE_FILES})

enable_testing()

target_link_libraries(cpp_fundamentals gtest gtest_main)
include_directories(src)
include_directories(src/udemy_cpp_course)