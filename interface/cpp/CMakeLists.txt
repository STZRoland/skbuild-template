set(EXE_NAME "CPPInterface")

add_executable(${EXE_NAME} main.cpp)
target_compile_features(${EXE_NAME} PRIVATE cxx_std_17)

# Name has to match the library name defined in src/CMakeLists.txt
target_link_libraries(${EXE_NAME} PRIVATE "cpp_lib")
