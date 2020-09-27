cmake_minimum_required(VERSION 3.16.3)

Project(cpp-develop-template)

enable_testing()
include(external/creal.cmake)
include(external/gtest.cmake)
add_subdirectory(src)
add_subdirectory(test)
