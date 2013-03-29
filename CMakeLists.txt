cmake_minimum_required(VERSION 2.8)

project(test)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIR})

find_package(Boost COMPONENTS random REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})
link_directories(${BOOST_LIBRARYDIR})

add_executable(test test.cpp)
target_link_libraries(test ${GTEST_BOTH_LIBRARIES})
