include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runLeetCodeTests
        P1.cpp P2.cpp P318.cpp P561.cpp)

target_link_libraries(runLeetCodeTests gtest gtest_main)
target_link_libraries(runLeetCodeTests leetcode)
