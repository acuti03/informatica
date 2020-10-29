#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    int *pi;
    int num;

    num = 20;
    pi = &num;

    printf("\n%d\n",*pi);
}