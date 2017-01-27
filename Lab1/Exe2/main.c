//
// Created by Owen Kane on 27/01/2017.
//

#include <stdio.h>
#include <string.h>
#include "areaOfRectangle.h"
#include <stdlib.h>

int main(int argc, char **argv){

    if(strcmp(argv[1],"Rectangle") == 0) {
        areaOfRectangle(atoi(argv[2]),atoi(argv[3]));
    }
}

