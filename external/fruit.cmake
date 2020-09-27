include(ExternalProject)

# directory setting
set(FRUIT_BUILD_DIR ${CMAKE_BINARY_DIR}/fruit)
set(FRUIT_INSTALL_DIR ${PROJECT_SOURCE_DIR}/external-libs/fruit)
set(FRUIT_INCLUDE_DIR ${FRUIT_INSTALL_DIR}/include)
set(FRUIT_LIB_DIR ${FRUIT_INSTALL_DIR}/lib)

# external project setting
ExternalProject_Add(
    googlefruit
    URL https://github.com/google/fruit/archive/v3.6.0.zip
    PREFIX ${FRUIT_BUILD_DIR}
    CMAKE_ARGS -DCMAKE_INSTALL_PREFIX:PATH=${FRUIT_INSTALL_DIR}
               -DCMAKE_BUILD_TYPE=Release
               -DFRUIT_USES_BOOST=False
)

# register library
add_library(fruit IMPORTED SHARED GLOBAL)
set_target_properties(fruit PROPERTIES
    IMPORTED_LOCATION ${FRUIT_LIB_DIR}/libfruit.so
)

# register include file path
include_directories(${FRUIT_INCLUDE_DIR})
