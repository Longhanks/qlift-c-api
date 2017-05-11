# Define minimum cmake version
cmake_minimum_required(VERSION 3.0.0)

# Define project name
project(qlift-c-api)

# Define version number
set(VERSION "0.0.1")

# Compiler flags
set(CMAKE_CXX_STANDARD 14)

if (CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    # using regular Clang or AppleClang
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Weverything -Wno-c++98-compat -Wno-c++98-compat-pedantic")
elseif (CMAKE_CXX_COMPILER_ID MATCHES "GNU")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")
elseif (CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4 /WX")
endif()

# Debugging flag
option(ENABLE_DEBUG "Enable debugging" OFF)

if(ENABLE_DEBUG)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0")
endif(ENABLE_DEBUG)

# output compile database (useful for completion)
set(CMAKE_EXPORT_COMPILE_COMMANDS "ON")

if(APPLE)
    execute_process(COMMAND brew --prefix qt OUTPUT_VARIABLE QT_PREFIX_PATH)
    string(REGEX REPLACE "\n$" "" CMAKE_PREFIX_PATH "${QT_PREFIX_PATH}")
endif()
find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)

# Define include dir
include_directories(
    ${CMAKE_SOURCE_DIR}/include
)

# Define source files
set(SOURCES
    src/qlift-c-api.cpp
)

# Binary output dir
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Define binary target
add_library(qlift-c-api SHARED ${SOURCES})

# Define linked libs
target_link_libraries(qlift-c-api Qt5::Core Qt5::Widgets)

