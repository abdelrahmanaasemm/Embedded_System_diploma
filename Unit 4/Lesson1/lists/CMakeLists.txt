cmake_minimum_required(VERSION 3.24)
project(lists C)

set(CMAKE_C_STANDARD 11)

add_executable(lists main.c list.h list.c)
