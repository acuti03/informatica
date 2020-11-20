#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int es1(char *a, char *b);
//int es2(char *a, char *b);

int main(){
    char a[20];
    char b[20];

    printf("\nScrvi: ");
    scanf("%s",a);
    printf("\nScrvi: ");
    scanf("%s",b);

    printf("\nINDICE: %d",es1(a,b));
}

int es1(char *a, char *b){
    int idx=-1;
    int j=0,k=0;

    while((a[j] != '\0') && (b[k] != '\0')){
        if(a[j] == b[k]){
            if(idx==-1)
                idx = j;
            k++;
        }
        else{
            idx = -1;
            k=0;
        }
        j++;
        printf("\n%d",j);
    }
    return idx;
}