set(PYTHON_LIB_NAME "_python_lib")

set(PYBIND11_NEWPYTHON ON)
find_package(pybind11)

if(SKBUILD)
    message(STATUS "The project is built using scikit-build")
endif()

pybind11_add_module(${PYTHON_LIB_NAME} MODULE python_interface.cpp)

target_compile_features(${PYTHON_LIB_NAME} PRIVATE cxx_std_17)
target_link_libraries(${PYTHON_LIB_NAME} PRIVATE "cpp_lib" pybind11::headers)

message(STATUS "Project name is: ${SKBUILD_PROJECT_NAME}")
install(TARGETS ${PYTHON_LIB_NAME}
    LIBRARY DESTINATION ${SKBUILD_PROJECT_NAME}
)
