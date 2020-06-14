# set minimum version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(recipe-01 LANGUAGES C CXX)

#add_library(cmake-study
#        SHARED
#        src/main/cpp/main.cpp
#        )

message(STATUS "Project name is " ${PROJECT_NAME})

add_executable(${PROJECT_NAME}
        src/main/cpp/main.cpp
        )