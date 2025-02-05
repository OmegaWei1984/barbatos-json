cmake_minimum_required (VERSION 3.28)
project(barbjson_test CXX)

if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic -Wall")
endif()

add_library(barbjson src/barbjson.cpp)
add_executable(barbjson_test tests/main.cpp)
target_include_directories(barbjson PUBLIC include)
target_link_libraries(barbjson_test barbjson)
