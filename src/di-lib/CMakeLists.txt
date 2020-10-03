cmake_minimum_required(VERSION 3.16.3)

project(di-lib CXX)

# compile setting.
if (NOT CMAKE_BUILD_TYPE)
    message(STATUS "No build type selected, default to Debug")
    set(CMAKE_BUILD_TYPE "Debug")
endif ()
if (CMAKE_BUILD_TYPE MATCHES Release)
    add_definitions(-DNDEBUG)
endif ()
set(CMAKE_CXX_FLAGS "-Wall -Wextra -pedantic")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_C_FLAGS} -g -O0")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_C_FLAGS} -O2")

# set output directory
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# Set the directories where include file can be found.
include_directories(${PROJECT_SOURCE_DIR}/include)

# set the source files.
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LIB)
aux_source_directory(${PROJECT_SOURCE_DIR}/src/writer SRC_LIB)

# build target
add_library(${PROJECT_NAME} STATIC ${SRC_LIB})
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)
