cmake_minimum_required (VERSION 3.28)
project(barbjson_test CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic -Wall")
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)
set(CMAKE_BUILD_TYPE Debug)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
enable_testing()
add_library(barbjson src/barbjson.cpp)
add_executable(barbjson_test tests/main.cpp)
target_include_directories(barbjson PUBLIC include)
target_link_libraries(barbjson_test barbjson GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(barbjson_test)
