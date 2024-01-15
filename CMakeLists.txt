cmake_minimum_required(VERSION 3.27)
project(libnya C)

set(CMAKE_C_STANDARD 23)

add_library(libnya SHARED library.c)
