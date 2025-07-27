cmake_minimum_required(VERSION 3.30)
project(template)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(tests)
add_subdirectory(src)

add_executable(${PROJECT_NAME} src/main.cpp)