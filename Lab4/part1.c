//
// Created by Owen Kane on 22/02/2017.
//

#include <stdio.h>
#include <stdlib.h>
#include  <unistd.h>

int main(){

    int pid = fork();

    if(pid > 0) {
        printf("Parent process");
        sleep(10);
        exit(EXIT_SUCCESS);
    }else if(pid == 0){
        printf("Child process");

        while(1){
            sleep(1);
            printf("Child 1: my parent is: %i\n", getppid());
        }
    }

    return 0;
}