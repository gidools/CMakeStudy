cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(recipe-03 LANGUAGES CXX)

add_executable(hello-world hello-world.cpp)

target_compile_definitions(hello-world PUBLIC "COMPILER_NAME=\"${CMAKE_CXX_COMPILER_ID}\"")

message("Compiler name is " ${COMPILER_NAME})
message("CMAKE_CXX_COMPILER_ID is ${CMAKE_CXX_COMPILER_ID}")

target_compile_definitions(hello-world PUBLIC "IS_${CMAKE_CXX_COMPILER_ID}_COMPILER")