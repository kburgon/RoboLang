cmake_minimum_required(VERSION 3.4)

project(RoboLang)

set(CMAKE_CXX_FLAGS --std=c++11)

set(SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

add_subdirectory("${PROJECT_SOURCE_DIR}/Shell")

add_executable(robolang ${SOURCES} ${HEADERS})
