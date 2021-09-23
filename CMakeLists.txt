cmake_minimum_required(VERSION 3.16)
project(Toolbox)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(lib)
add_subdirectory(lib-test)

add_executable(Toolbox main.cpp)
target_link_libraries(Toolbox Probability)

# add the binary tree to the search path for include files
target_include_directories(Toolbox PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/lib"
                          )
