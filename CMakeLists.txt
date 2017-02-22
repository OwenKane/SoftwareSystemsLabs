cmake_minimum_required(VERSION 3.6)
project(SoftwareSystemsLabs)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES Lab1/Exe2/main.c Lab1/Exe2/areaOfRectangle.c Lab1/Exe2/areaOfRectangle.h "Lab2(2)/Part1/newMessage.h" "Lab2(2)/Part1/newMessage.c" "Lab2(2)/Part1/program1.c")

add_executable(SoftwareSystemsLabs ${SOURCE_FILES})