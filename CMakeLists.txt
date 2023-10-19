cmake_minimum_required(VERSION 3.18)
project(prosperous)

set(CMAKE_CXX_STANDARD 17)
list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

option(PROSPEROUS_ENABLE_SPELLCHECK "Enable spellcheck target, requires codespell" OFF)

include(Spellcheck)

message(STATUS "Building for ${CMAKE_SYSTEM_NAME}")
if(LINUX)
    set(PROSPEROUS_PLATFORM_LINUX 1)
    set(PROSPEROUS_PLATFORM_WINDOWS 0)
elseif(WIN32)
    set(PROSPEROUS_PLATFORM_LINUX 0)
    set(PROSPEROUS_PLATFORM_WINDOWS 1)
endif()

configure_file(src/prosperous/config.h.in ${PROJECT_BINARY_DIR}/src/prosperous/config.h)

add_library(prosperous
        src/prosperous/Console.cpp
        src/prosperous/Console.hpp
        src/prosperous/Colors.hpp
        src/prosperous/Colors.cpp
        src/prosperous/RichText.cpp
        src/prosperous/RichText.hpp
        ${PROJECT_BINARY_DIR}/src/prosperous/config.h
        src/prosperous/Meassurement.cpp
        src/prosperous/Meassurement.hpp
)
target_include_directories(prosperous PUBLIC ${PROJECT_SOURCE_DIR}/src/ ${PROJECT_BINARY_DIR}/src/)

add_subdirectory(vendor)
add_subdirectory(demo)

enable_testing()
add_subdirectory(test)