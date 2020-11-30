#include <stdio.h>
#include <stdlib.h>

#define DIM 50

void es1(char *s, char *p);

int main(int argc, char** argv){

    es1(argv[1],argv[2]);
}

void es1(char *s, char *p){
    int i;
    char l[DIM];

    while(*s != '\0'){
        l[i] == *s;
        i++;
        s++;
    }
    while(*p != '\0'){
        l[i] == *p;
        i++;
        p++;
    }
    printf("\n");
    for(i=0; i<DIM; i++){
        printf("%c",l[i]);
    }
}