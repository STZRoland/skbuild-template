cmake_minimum_required(VERSION 3.20)

# Revert to default values in case the project is not build with pip install
if (NOT DEFINED ${SKBUILD_PROJECT_NAME})
    set(SKBUILD_PROJECT_NAME "skbuild_template")
    set(SKBUILD_PROJECT_VERSION "0.1.0")
endif ()

project(
    ${SKBUILD_PROJECT_NAME}
    VERSION ${SKBUILD_PROJECT_VERSION}
    LANGUAGES CXX
)

# Define build option
option(BUILD_CPP_INTERFACE "Build the cpp interface" ON)
option(BUILD_PYTHON_INTERFACE "Build the python interface" ON)
option(BUILD_TESTS "Build the cpp tests" ON)

message(STATUS "BUILD_CPP_INTERFACE: ${BUILD_CPP_INTERFACE}")
message(STATUS "BUILD_PYTHON_INTERFACE: ${BUILD_PYTHON_INTERFACE}")
message(STATUS "BUILD_TESTS: ${BUILD_TESTS}")

add_subdirectory(src)

if (BUILD_TESTS)
    add_subdirectory(tests/cpp)
endif ()
if (BUILD_CPP_INTERFACE)
    add_subdirectory(interface/cpp)
endif ()
if (BUILD_PYTHON_INTERFACE)
    add_subdirectory(interface/python)
endif ()
