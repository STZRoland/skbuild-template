set(CPP_LIB_NAME "cpp_lib")

set(SRC_FILES
    ${PROJECT_SOURCE_DIR}/src/functions.cpp
)

set(HDR_FILES
    ${PROJECT_SOURCE_DIR}/include/functions.h
)

add_library(${CPP_LIB_NAME}
    ${SRC_FILES} ${HDR_FILES}
)

target_include_directories(${CPP_LIB_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)