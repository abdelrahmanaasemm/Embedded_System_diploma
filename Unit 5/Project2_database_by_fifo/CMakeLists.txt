cmake_minimum_required(VERSION 3.24)
project(Project2_database_by_fifo C)

set(CMAKE_C_STANDARD 11)

add_executable(Project2_database_by_fifo main.c Queue.c Queue.h system.c system.h Platform.h Queue.c)
