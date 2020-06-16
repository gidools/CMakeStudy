cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(recipe-03 LANGUAGES CXX)

add_executable(hello-world hello-world.cpp)

target_compile_definitions(hello-world PUBLIC "COMPILER_NAME=\"${CMAKE_CXX_COMPILER_ID}\"")

message("Compiler name is " ${COMPILER_NAME})
message("CMAKE_CXX_COMPILER_ID is ${CMAKE_CXX_COMPILER_ID}")

if(CMAKE_CXX_COMPILER_ID MATCHES Intel)
    target_compile_definitions(hello-world PUBLIC "IS_INTEL_CXX_COMPILER")
endif()
if(CMAKE_CXX_COMPILER_ID MATCHES GNU)
    target_compile_definitions(hello-world PUBLIC "IS_GNU_CXX_COMPILER")
endif()
if(CMAKE_CXX_COMPILER_ID MATCHES PGI)
    target_compile_definitions(hello-world PUBLIC "IS_PGI_CXX_COMPILER")
endif()
if(CMAKE_CXX_COMPILER_ID MATCHES XL)
    target_compile_definitions(hello-world PUBLIC "IS_XL_CXX_COMPILER")
endif()