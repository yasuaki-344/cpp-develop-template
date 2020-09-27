include(ExternalProject)

# directory setting
set(SPDLOG_BUILD_DIR ${CMAKE_BINARY_DIR}/spdlog)
set(SPDLOG_INSTALL_DIR ${PROJECT_SOURCE_DIR}/external-libs/spdlog)
set(SPDLOG_INCLUDE_DIR ${SPDLOG_INSTALL_DIR}/include)
set(SPDLOG_LIB_DIR ${SPDLOG_INSTALL_DIR}/lib)

# external project setting
ExternalProject_Add(
    spdlog
    URL https://github.com/gabime/spdlog/archive/v1.8.0.zip
    PREFIX ${SPDLOG_BUILD_DIR}
    CMAKE_ARGS -DCMAKE_INSTALL_PREFIX:PATH=${SPDLOG_INSTALL_DIR}
               -DCMAKE_BUILD_TYPE=Release
)

# register library

add_library(log IMPORTED STATIC GLOBAL)
set_target_properties(log PROPERTIES
    IMPORTED_LOCATION ${SPDLOG_LIB_DIR}/libspdlog.a
)

# register include file path
include_directories(${SPDLOG_INCLUDE_DIR})
