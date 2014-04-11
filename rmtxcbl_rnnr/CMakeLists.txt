cmake_minimum_required (VERSION 2.8)
project (rmtxcbl_rnnr)

set(BINARYNAME rmtxcbl_rnnr)
set(SRC_FILES rmtxbl_rnnr.cpp)

add_executable(${BINARYNAME} ${SRC_FILES})
