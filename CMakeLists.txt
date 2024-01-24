cmake_minimum_required(VERSION 3.27)
project(libnya C)

set(CMAKE_C_STANDARD 23)

include_directories(include)

add_library(nya SHARED src/library.c
        src/vector.c
        include/vector.h
        src/buffer.c
        include/buffer.h)
