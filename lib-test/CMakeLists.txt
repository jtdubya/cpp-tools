cmake_minimum_required(VERSION 3.16)
project(lib-test)
enable_testing()

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/e2239ee6043f73722e7aa812a459f54a28552929.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(ProbabilityTest probability-test.cpp)
target_link_libraries(ProbabilityTest gtest_main Probability)

include(GoogleTest)
gtest_discover_tests(ProbabilityTest)