#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void stampa(char* s);

int main(int argc, char argv[]){
    int i;

    for(i=1; i<argc; i++){
        stampa(*(argv+i));
    }
}

void stampa(char* s){

}