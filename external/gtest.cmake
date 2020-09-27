cmake_minimum_required(VERSION 3.16.3)

include(ExternalProject)

# directory setting
set(GTEST_BUILD_DIR ${CMAKE_BINARY_DIR}/gtest)
set(GTEST_INSTALL_DIR ${PROJECT_SOURCE_DIR}/external-libs/gtest)
set(GTEST_INCLUDE_DIR ${GTEST_INSTALL_DIR}/include)
set(GTEST_LIB_DIR ${GTEST_INSTALL_DIR}/lib)

find_package(Threads REQUIRED)

# external project setting
ExternalProject_Add(
    googletest
    URL https://github.com/google/googletest/archive/release-1.10.0.zip
    PREFIX ${GTEST_BUILD_DIR}
    CMAKE_ARGS -DCMAKE_INSTALL_PREFIX:PATH=${GTEST_INSTALL_DIR}
)

# register library
add_library(gtest IMPORTED STATIC GLOBAL)
set_target_properties(gtest PROPERTIES
    IMPORTED_LOCATION ${GTEST_LIB_DIR}/libgtest.a
    INTERFACE_LINK_LIBRARIES ${CMAKE_THREAD_LIBS_INIT}
)
add_library(gtest_main STATIC IMPORTED GLOBAL)
set_target_properties(gtest_main PROPERTIES
    IMPORTED_LOCATION ${GTEST_LIB_DIR}/libgtest_main.a
    INTERFACE_LINK_LIBRARIES ${CMAKE_THREAD_LIBS_INIT}
)

# register include file path
include_directories(${GTEST_INCLUDE_DIR})
