# set minimum version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(recipe-03-02 LANGUAGES C CXX)

add_library(message-objs
        OBJECT
        src/main/cpp/Message.cpp
        )

add_library(message-shared
        SHARED
        $<TARGET_OBJECTS:message-objs>)

add_library(message-static
        STATIC
        $<TARGET_OBJECTS:message-objs>)

add_library(${PROJECT_NAME}
        SHARED
        src/main/cpp/main.cpp)

target_link_libraries(${PROJECT_NAME} message-shared)

message(STATUS "Output directory is " ${CMAKE_LIBRARY_OUTPUT_DIRECTORY})