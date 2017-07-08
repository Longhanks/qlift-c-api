# Define minimum cmake version
cmake_minimum_required(VERSION 3.0.0)

# Define project name
project(qlift-c-api)

# Define version number
set(VERSION "0.0.9")

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
    include
    src
)

# Define source files
file(GLOB PUBLIC_SOURCES
        src/qlift-c-api/*.h
        src/qlift-c-api/*.cpp
)

set(SOURCES
        src/public/qlift-c-api.h
        ${PUBLIC_SOURCES}
)

# Binary output dir
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Config for generation of pkg-config file
set(DEST_DIR "${CMAKE_INSTALL_PREFIX}")

configure_file("qlift-c-api.pc.in" "qlift-c-api.pc" @ONLY)

# Define binary target
add_library(qlift-c-api SHARED ${SOURCES})

# Define linked libs
target_link_libraries(qlift-c-api Qt5::Core Qt5::Widgets)

install(TARGETS qlift-c-api
    DESTINATION "${CMAKE_INSTALL_PREFIX}/lib"
)

install(FILES src/public/qlift-c-api.h
    DESTINATION "${CMAKE_INSTALL_PREFIX}/include")

install(DIRECTORY src/qlift-c-api/
    DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qlift-c-api"
    FILES_MATCHING PATTERN "*.h*")

install(FILES ${CMAKE_BINARY_DIR}/qlift-c-api.pc
    DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig")
