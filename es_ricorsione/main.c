#include <stdio.h>

int find(char* s, char* p);
int countOccurrences(char* s, char* p);

int cnt = 0;
int flag = -1;

// argc => arguments count
// argv => arguments values

int main(int argc, char** argv)
{
	if(find(*(argv+1),*(argv+2)) >= 0)											//indice indicato come [1] [2] [3] [4]
		                                                                        //                      a	b	c	d
		printf("\nOccorrenza trovata a indice %d",find(*(argv+1),*(argv+2)) + 1);		
		
		
	else
	
		printf("\nOccorrenza non trovata con ritorno %d",find(*(argv+1),*(argv+2)));
		
		
	printf("\n\n");
	
    printf("Occorrenze di \"%s\" in \"%s\": %d\n", argv[1], *(argv+2), countOccurrences(argv[1], *(argv+2)));

    return 0;
}

int find(char* s, char* p){ // ritorna -1 se p non è in s, altrimenti il suo indice
    
    if(*s!='\0'){
    
    	if(*s == *p && flag < 0){
    		
    		flag = cnt;
    		
		}
		
		cnt++;

		find(s + 1, p);	
	}
	
	cnt = 0;
	
	if(flag>=0)
		return(flag);
	else
		return -1;
	
}



int countOccurrences(char* s, char* p){ // ritorna il numero di volte in cui p è contenuta in s
    
    if(*s!='\0'){
    
    	if(*s == *p){
		
			cnt++;
		}
		
		countOccurrences(s + 1, p);	
	}
	
	return cnt;
    
}
