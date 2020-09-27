include(ExternalProject)

# directory setting
set(CEREAL_BUILD_DIR ${CMAKE_BINARY_DIR}/cereal)
set(CEREAL_INSTALL_DIR ${PROJECT_SOURCE_DIR}/external-libs/cereal)
set(CEREAL_INCLUDE_DIR ${CEREAL_INSTALL_DIR}/include)

# external project setting
ExternalProject_Add(
    cereal
    URL https://github.com/USCiLab/cereal/archive/v1.3.0.zip
    PREFIX ${CEREAL_BUILD_DIR}
    CONFIGURE_COMMAND ""
    BUILD_COMMAND ""
    INSTALL_COMMAND ${CMAKE_COMMAND} -E copy_directory
                    ${CEREAL_BUILD_DIR}/src/cereal/include ${CEREAL_INCLUDE_DIR}
    TEST_COMMAND ""
)

# register include file path
include_directories(${CEREAL_INCLUDE_DIR})
