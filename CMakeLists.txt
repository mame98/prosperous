cmake_minimum_required(VERSION 3.26)
project(prosperous)

set(CMAKE_CXX_STANDARD 17)

add_library(prosperous
        src/prosperous/Console.cpp
        src/prosperous/Console.hpp
        src/prosperous/Colors.hpp
        src/prosperous/Colors.cpp
)
target_include_directories(prosperous PUBLIC ${PROJECT_SOURCE_DIR}/src/)

add_subdirectory(demo)
