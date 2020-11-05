
#include <stdio.h>

void stampa(char* s); // char[]
void stampaRev(char* s); // char[]

/*
    command:    ./main pippo pluto
    argv:
    x    0 1 2 3 4 5 6 7 8
    0    . / m a i n \0
    1    p i p p o \0
    2    p l u t o \0
*/


int main(int argc, char** argv) { // char[][]
    int i;

    if(argc<=1){
        printf("Mancano argomenti, mettine almeno uno\n");
        return 1;
    }

    printf("%d\n", argc);

    for(i=1; i<argc; i++){
        stampaRev(*(argv+i)); // argv[i]

        printf("\n");
    }

    return 0;
}

void stampa(char* s){
    if(*s!='\0'){
        printf("%c",*s);
        stampa(s+1);
    }
}

// a e r e o

void stampaRev(char* s){
    if(*s!='\0'){
        stampaRev(s+1);
        printf("%c",*s);
    }
}