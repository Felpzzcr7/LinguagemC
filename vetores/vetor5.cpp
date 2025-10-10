#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

bool TOF(int cont1[], int cont2[]);

int main (){
	int cont1[4]; 
	int cont2[4];
	
	for(int i=0; i<4; i++){	
	printf("me diga um numero PARA O VETOR 1 ");
		scanf("%d", &cont1[i]);
	}

		
	for(int i=0; i<4; i++){	
	printf("me diga um numero PARA O VETOR 2 ");
		scanf("%d", &cont2[i]);
	}
		
	if(TOF(cont1,cont2))
		printf("eh verdade");
	else
		printf("eh mentira");

	return 0;
}

bool TOF(int cont1[], int cont2[]){
	for(int i=0; i<4; i++){	
	if(cont1[i] != cont2[i])
			return false;
	}
	
				
	return true;
	
}
