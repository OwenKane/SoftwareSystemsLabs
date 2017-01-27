//
// Created by Owen Kane on 27/01/2017.
//
#include <stdio.h>

int areaOfRectangle(int s1, int s2){
    int area;
    int side1 = s1;
    int side2 = s2;

    printf("Side1: %d\n", side1);
    printf("Side2: %d\n", side2);

    area = side1 * side2;

    printf("The area of rectangle is: %d\n", area);
}