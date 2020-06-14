# set minimum version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(cmake_study LANGUAGES C CXX)

#add_library(cmake-study
#        SHARED
#        src/main/cpp/main.cpp
#        )

add_executable(${PROJECT_NAME}
        src/main/cpp/main.cpp
        )