cmake_minimum_required(VERSION 3.6)
project(SoftwareSystemsLabs)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES Lab1/Exe2/main.c Lab1/Exe2/areaOfRectangle.c Lab1/Exe2/areaOfRectangle.h "Lab2/Part1/newMessage.h" "Lab2/Part1/newMessage.c" "Lab2/Part1/program1.c" Lab3/lab3.c Lab3/Q1.c Lab4/part1.c Lab5/lecture.c Lab5/lecture2.c Lab5/part3.c)

add_executable(SoftwareSystemsLabs ${SOURCE_FILES})