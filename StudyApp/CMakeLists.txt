# set minimum version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(recipe-04 LANGUAGES C CXX)

set(USE_LIBRARY OFF)

message(STATUS "Compile source into a library?" ${USE_LIBRARY})

set(BUILD_SHARED_LIBS  OFF)

list(APPEND _sources
        src/main/cpp/Message.cpp)

if (USE_LIBRARY)
    add_library(message ${_sources})

    add_executable(${PROJECT_NAME}
            src/main/cpp/main.cpp)

    target_link_libraries(${PROJECT_NAME} message)
else ()
    add_executable(${PROJECT_NAME}
            src/main/cpp/main.cpp
            ${_sources})
endif ()

#add_library(message-objs
#        OBJECT
#        src/main/cpp/Message.cpp
#        )
#
#add_library(message-shared
#        SHARED
#        $<TARGET_OBJECTS:message-objs>)
#
#add_library(message-static
#        STATIC
#        $<TARGET_OBJECTS:message-objs>)
#
#add_library(${PROJECT_NAME}
#        SHARED
#        src/main/cpp/main.cpp)
#
#target_link_libraries(${PROJECT_NAME} message-shared)

message(STATUS "Output directory is " ${CMAKE_LIBRARY_OUTPUT_DIRECTORY})