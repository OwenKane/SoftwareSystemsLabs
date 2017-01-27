//
// Created by Owen Kane on 27/01/2017.
//

#include <stdio.h>
#include <string.h>
#include "areaOfRectangle.h"

int main(int argc, char **argv){
    int num;
    sscanf (argv[2],"%d",&num);

    int num2;
    sscanf (argv[3],"%d",&num2);

    printf("The length of input arg[1]  is: %zu\n", strlen(argv[1]));

    if(strcmp(argv[1], "Rectangle")) {
        areaOfRectangle(num,num2);
    }
}

