# set minimum cmake version
cmake_minimum_required(VERSION 3.6 FATAL_ERROR)

# cmake 3.10 does not show detail message in console window.
# cmake 3.6 fails to compile.
# Error is   CMake Error at CMakeLists.txt:48 (cmake_host_system_information):
# cmake_host_system_information does not recognize <key> IS_64BIT

#cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

# project name and language
project(recipe-05 LANGUAGES CXX)

# define executable
add_executable(processor-info "")

# and its source file
target_sources(processor-info
        PRIVATE
        processor-info.cpp
        )

message(STATUS "PROJECT_BINARY_DIR is ${PROJECT_BINARY_DIR}")

# and its include directories
target_include_directories(processor-info
        PRIVATE
        ${PROJECT_BINARY_DIR}
        )

foreach(key
        IN ITEMS
        NUMBER_OF_LOGICAL_CORES
        NUMBER_OF_PHYSICAL_CORES
        TOTAL_VIRTUAL_MEMORY
        AVAILABLE_VIRTUAL_MEMORY
        TOTAL_PHYSICAL_MEMORY
        AVAILABLE_PHYSICAL_MEMORY
        IS_64BIT
        HAS_FPU
        HAS_MMX
        HAS_MMX_PLUS
        HAS_SSE
        HAS_SSE2
        HAS_SSE_FP
        HAS_SSE_MMX
        HAS_AMD_3DNOW
        HAS_AMD_3DNOW_PLUS
        HAS_IA64
        OS_NAME
        OS_RELEASE
        OS_VERSION
        OS_PLATFORM
        )
    cmake_host_system_information(RESULT _${key} QUERY ${key})
    message(STATUS "_${key} RESULT ${RESULT}")
endforeach()

configure_file(config.h.in config.h @ONLY)
