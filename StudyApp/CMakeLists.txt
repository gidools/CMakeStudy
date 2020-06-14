cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(recipe-08 LANGUAGES CXX)

message("C++ compiler flags : ${CMAKE_CXX_FLAGS}")

list(APPEND flags "-fPIC" "-Wall")

if (NOT WIN32)
    list(APPEND flags "-Wextra" "-Wpedantic")
endif ()

add_library(geometry
        STATIC
        src/main/cpp/geometry_circle.cpp
        src/main/cpp/geometry_polygon.cpp
        src/main/cpp/geometry_rhombus.cpp
        src/main/cpp/geometry_square.cpp
        )

target_compile_options(geometry
        PRIVATE
        ${flags}
        )

add_library(compute-areas
        SHARED
        src/main/cpp/compute-areas.cpp)

target_compile_options(compute-areas
        PRIVATE
        "-fPIC"
        )

target_link_libraries(compute-areas geometry)