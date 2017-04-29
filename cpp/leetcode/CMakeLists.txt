project(leetcode)

set(HEADER_FILES
        Solution1.hpp
        Solution5.hpp
        Solution19.hpp
        Solution22.hpp
        Solution88.hpp
        Solution461.hpp
        Solution508.hpp
        Solution516.hpp
        Solution318.h)

set(SOURCE_FILES
        Solution1.cpp
        Solution5.cpp
        Solution19.cpp
        Solution22.cpp
        Solution88.cpp
        Solution461.cpp
        Solution508.cpp
        Solution516.cpp
        Solution318.cpp)

add_library(leetcode STATIC ${SOURCE_FILES} ${HEADER_FILES})
