#  This command adds the current directory to the INTERFACE_INCLUDE_DIRECTORIES property for all targets
#  defined in this CMakeLists.txt file. In other words, we did not have to use target_include_directories
#  to indicate the header file location for cpp_test.
set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE ON)

add_library(sum_integers sum_integers.cpp)

add_executable(sum_up main.cpp)

target_link_libraries(sum_up sum_integers)
