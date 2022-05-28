cmake_minimum_required(VERSION 3.22)
project(tipi C)

set(CMAKE_C_STANDARD 99)

add_executable(tipi main.c type.c type.h)
