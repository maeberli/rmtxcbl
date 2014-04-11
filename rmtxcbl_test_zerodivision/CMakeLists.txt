cmake_minimum_required (VERSION 2.8)
project (rmtxcbl_test_zerodivision)

set(BINARYNAME rmtxcbl_test_zerodivision)
set(SRC_FILES zerodivision.cpp)

add_executable(${BINARYNAME} ${SRC_FILES})
