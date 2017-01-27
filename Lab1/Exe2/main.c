//
// Created by Owen Kane on 27/01/2017.
//

#include <stdio.h>
#include "areaOfRectangle.h"

int main(int argc, char **argv){
    int num;
    sscanf (argv[1],"%d",&num);

    int num2;
    sscanf (argv[2],"%d",&num2);

    areaOfRectangle(num,num2);
}

