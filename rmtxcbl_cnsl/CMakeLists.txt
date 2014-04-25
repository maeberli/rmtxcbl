cmake_minimum_required (VERSION 2.8)
project (rmtxcbl_cnsl)

set(BINARYNAME rmtxcbl_cnsl)
file(GLOB SRC_FILES *.cpp)

add_executable(${BINARYNAME} ${SRC_FILES})
