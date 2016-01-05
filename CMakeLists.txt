cmake_minimum_required(VERSION 3.4)

project(RoboLang)

set(CMAKE_CXX_FLAGS --std=c++11)

set(SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
${CMAKE_CURRENT_SOURCE_DIR}/Shell/Parser.cpp
${CMAKE_CURRENT_SOURCE_DIR}/Shell/RoboShell.cpp
${CMAKE_CURRENT_SOURCE_DIR}/Compiler/Compiler.cpp)

set(HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/Shell/Parser.hpp
${CMAKE_CURRENT_SOURCE_DIR}/Shell/RoboShell.hpp
${CMAKE_CURRENT_SOURCE_DIR}/Compiler/Compiler.hpp)

# add_subdirectory("${PROJECT_SOURCE_DIR}/Shell")

add_executable(robolang ${SOURCES} ${HEADERS})
