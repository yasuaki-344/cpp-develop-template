cmake_minimum_required(VERSION 3.16.3)

Project(cpp-develop-template)
if (EXISTS ${PROJECT_SOURCE_DIR}/build.conan/conanbuildinfo.cmake)
    include(${PROJECT_SOURCE_DIR}/build.conan/conanbuildinfo.cmake)
    conan_basic_setup()
else ()
    message(FATAL " Execute conan install command at first!")
endif ()

enable_testing()
include(external/fakeit.cmake)
add_subdirectory(src)
add_subdirectory(test)
