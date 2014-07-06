cmake_minimum_required(VERSION 2.6)

ENABLE_TESTING()

# sources exclusive for test executables
SET(SRC
    allTests.cpp 
    CalculatorTest.cpp
)

message ("     ---> Configuring unit tests executables: ${TEST_PROJECT_NAME}")
ADD_EXECUTABLE(${TEST_PROJECT_NAME} ${SRC})
TARGET_LINK_LIBRARIES(${TEST_PROJECT_NAME} CppUTest testTDDLib)
