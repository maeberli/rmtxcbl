cmake_minimum_required (VERSION 2.8)
project (rmtxcbl_test_helloworld)

set(BINARYNAME rmtxcbl_test_helloworld)
set(SRC_FILES helloworld.cpp)

add_executable(${BINARYNAME} ${SRC_FILES})
