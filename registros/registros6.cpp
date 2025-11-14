#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct aluno {
    char nome[100];
    int nota[3];
};

int main() {
    struct aluno p[5];

    for (int i = 0; i < 5; i++) {
    	printf("Me de o nome do aluno %d:\n", i+1);
        scanf(" %s", p[i].nome);
    	
        p[i].nota[0]= rand () %10;

   
        p[i].nota[1]= rand () %10;


        p[i].nota[2]= rand () %10;
    }

	int media[5];
	
	for (int i = 0; i < 5; i++)
		media[i]=0;
	    
	    
    for (int i = 0; i < 3; i++) 
            media[0]+=p[0].nota[i] ;
        
    
    

    for (int i = 0; i < 3; i++) 
            media[1]+=p[1].nota[i] ;
        
    
  
    for (int i = 0; i < 3; i++) 
            media[2]+=p[2].nota[i] ;
            
    
    for (int i = 0; i < 3; i++) 
            media[3]+=p[3].nota[i] ;
        
    
    
    for (int i = 0; i < 3; i++) 
            media[4]+=p[4].nota[i] ;
        
    
    
	for (int i = 0; i < 5; i++) 
    	printf("\n aluno:%s\n Media: %d", p[i].nome, media[i]/3 );

    return 0;
}

