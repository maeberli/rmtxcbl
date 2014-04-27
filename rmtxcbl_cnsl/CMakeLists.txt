cmake_minimum_required (VERSION 2.8)
project (rmtxcbl_cnsl)

set(BINARYNAME rmtxcbl_cnsl)
set(CMN_PATH ../rmtxcbl_cmn)
set(PROTOBUF_LIBRARY protobuf)
set(PTHREAD_LIBRARY pthread)

file(GLOB SRC_FILES *.cpp)
file(GLOB SRC_FILES_CMN ${CMN_PATH}/*.cpp)
file(GLOB SRC_FILES_CMN_PB ${CMN_PATH}/*.cc)

list(APPEND SRC_FILES ${SRC_FILES} ${SRC_FILES_CMN} ${SRC_FILES_CMN_PB})

include_directories(${CMN_PATH})
add_executable(${BINARYNAME} ${SRC_FILES})

target_link_libraries(${BINARYNAME}
    ${PROTOBUF_LIBRARY}
    ${PTHREAD_LIBRARY}
)
