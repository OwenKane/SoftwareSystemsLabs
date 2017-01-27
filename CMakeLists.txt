cmake_minimum_required(VERSION 3.6)
project(SoftwareSystemsLabs)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Lab1/hello.c Lab1/Exe2/main.c Lab1/Exe2/areaOfRectangle.c Lab1/Exe2/areaOfRectangle.h)

add_executable(SoftwareSystemsLabs ${SOURCE_FILES})