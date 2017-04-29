cmake_minimum_required(VERSION 3.7)
project(cpp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp leetcode_tests/tests/P1.cpp leetcode_tests/tests/P1.h)
add_executable(leetcode_run ${SOURCE_FILES})

include_directories(leetcode)

add_subdirectory(leetcode)
add_subdirectory(leetcode_tests)

target_link_libraries(leetcode_run leetcode)
