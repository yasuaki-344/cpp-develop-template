include(ExternalProject)

# directory setting
set(FAKEIT_BUILD_DIR ${CMAKE_BINARY_DIR}/fakeit)
set(FAKEIT_INSTALL_DIR ${PROJECT_SOURCE_DIR}/external-libs/fakeit)
set(FAKEIT_INCLUDE_DIR ${FAKEIT_INSTALL_DIR}/include)

# external project setting
ExternalProject_Add(
    fakeit
    URL https://github.com/eranpeer/FakeIt/archive/2.0.5.zip
    PREFIX ${FAKEIT_BUILD_DIR}
    CONFIGURE_COMMAND ""
    BUILD_COMMAND ""
    INSTALL_COMMAND ${CMAKE_COMMAND} -E copy_directory
                    ${FAKEIT_BUILD_DIR}/src/fakeit/single_header ${FAKEIT_INCLUDE_DIR}
    TEST_COMMAND ""
)

# register include file path
include_directories(${FAKEIT_INCLUDE_DIR})
