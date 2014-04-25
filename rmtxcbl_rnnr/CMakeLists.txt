cmake_minimum_required (VERSION 2.8)
project (rmtxcbl_rnnr)

set(BINARYNAME rmtxcbl_rnnr)
set(CMN_PATH ../rmtxcbl_cmn)

file(GLOB SRC_FILES *.cpp)
file(GLOB SRC_FILES_CMN ${CMN_PATH}/*.cpp)

list(APPEND SRC_FILES ${SRC_FILES} ${SRC_FILES_CMN})

include_directories(${CMN_PATH})
add_executable(${BINARYNAME} ${SRC_FILES})
