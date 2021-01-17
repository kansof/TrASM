cmake_minimum_required(VERSION 3.16)
project(TrASM C)

set(CMAKE_C_STANDARD 11)

add_executable(TrASM main.c proc.h tryte.h)