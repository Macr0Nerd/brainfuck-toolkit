cmake_minimum_required(VERSION 3.10)
project(brainfuck)

set(CMAKE_CXX_STANDARD 17)

add_executable(bfinterpreter interpreter.cpp)
add_executable(bftoc bftoc.cpp)