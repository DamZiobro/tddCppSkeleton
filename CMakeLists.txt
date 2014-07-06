cmake_minimum_required(VERSION 2.6)

option(TESTS "Compile and make tests for the code?" ON)

SET(PROJECT_NAME testTDD)

SET(CMAKE_BUILD_TYPE Release)
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} -O3")
#SET(CMAKE_BUILD_TYPE Debug)
#SET(CMAKE_CXX_FLAGS_DEBUG "-O0 -g3 -Wall -Werror")

SET(CMAKE_INSTALL_PREFIX /usr)

INCLUDE_DIRECTORIES("src")


#enable tests if applied
if(TESTS)
    SET(TEST_PROJECT_NAME "${PROJECT_NAME}_Tests")
    message ("     ---> CppUTest-based unit tests enabled...")
    add_subdirectory (tests)
endif (TESTS)

add_subdirectory(src)
