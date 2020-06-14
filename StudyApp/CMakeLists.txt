# set minimum version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(recipe-03 LANGUAGES C CXX)

add_library(message
        STATIC
        src/main/cpp/Message.cpp
        )

add_executable(${PROJECT_NAME}
        src/main/cpp/main.cpp)

target_link_libraries(${PROJECT_NAME} message)

message(STATUS "Output directory is " ${CMAKE_LIBRARY_OUTPUT_DIRECTORY})