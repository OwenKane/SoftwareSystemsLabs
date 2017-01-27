//
// Created by Owen Kane on 27/01/2017.
//

#include <stdio.h>
#include "areaOfRectangle.h"

int main(int argc, char **argv){
    int num;
    sscanf (argv[2],"%d",&num);

    int num2;
    sscanf (argv[3],"%d",&num2);

    if(argv[1] == "Rectangle"){
        areaOfRectangle(num,num2);
    }
}

