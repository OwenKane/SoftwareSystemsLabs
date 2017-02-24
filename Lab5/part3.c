//
// Created by Owen Kane on 24/02/2017.
//

#include <stdio.h>

int main(){
    FILE *fp;
    int status;
    char path[1024];

    fp = popen("echo Hello", "r");


    while(fgets(path, 1024, fp) != NULL){
        printf("%s", path);
    }

    status = pclose(fp);
}