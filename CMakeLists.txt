cmake_minimum_required(VERSION 3.16)
project(cpp-utils)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/e2239ee6043f73722e7aa812a459f54a28552929.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_subdirectory(lib)

add_executable(Main main.cpp)

target_link_libraries(Main PUBLIC Probability)

# add the binary tree to the search path for include files
target_include_directories(Main PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/lib"
                          )