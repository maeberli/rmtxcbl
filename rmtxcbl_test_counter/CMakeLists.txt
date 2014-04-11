cmake_minimum_required (VERSION 2.8)
project (rmtxcbl_test_counter)

set(BINARYNAME rmtxcbl_test_counter)
set(SRC_FILES counter.cpp)

add_executable(${BINARYNAME} ${SRC_FILES})
