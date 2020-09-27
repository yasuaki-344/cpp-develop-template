cmake_minimum_required(VERSION 3.16.3)

project(app CXX)

# compile setting.
if (NOT CMAKE_BUILD_TYPE)
    message(STATUS "No build type selected, default to Debug")
    set(CMAKE_BUILD_TYPE "Debug")
endif ()
if (CMAKE_BUILD_TYPE MATCHES Release)
    add_definitions(-DNDEBUG)
endif ()
set(CMAKE_CXX_FLAGS "-Wall -Wextra -pedantic --std=c++17")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_C_FLAGS} -g -O0")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_C_FLAGS} -O2")

# set output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Set the directories where include files can be found.
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${CMAKE_SOURCE_DIR}/src/lib/include)

# Set the source files.
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_APP)

# Set build target.
add_executable(${PROJECT_NAME} ${SRC_APP})

# Link staticlibraries
target_link_libraries(${PROJECT_NAME} lib log)
