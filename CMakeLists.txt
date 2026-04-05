cmake_minimum_required(VERSION 3.14)
project(LinkedList)
set(CMAKE_CXX_STANDARD 17)

add_executable(linked_list main.cpp src/lista.cpp)
target_include_directories(linked_list PRIVATE include)

# Testes desabilitados por padrão
option(BUILD_TESTS "Build test executable" OFF)

if(BUILD_TESTS)
    add_executable(tests tests/tests.cpp src/linked_list.cpp)
    target_include_directories(tests PRIVATE include)
endif()