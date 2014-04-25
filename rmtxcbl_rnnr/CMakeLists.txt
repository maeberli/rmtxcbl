cmake_minimum_required (VERSION 2.8)
project (rmtxcbl_rnnr)

set(BINARYNAME rmtxcbl_rnnr)
file(GLOB SRC_FILES *.cpp)

add_executable(${BINARYNAME} ${SRC_FILES})
