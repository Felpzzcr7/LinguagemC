#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
	int matriz1[3][2];
	int matriz2[3][2];
	
	for(int l= 0; l<3; l++)
		for(int c= 0; c<2; c++)
			matriz1[l][c]= rand() % 40;
			
			
	
	for(int lin=0; lin<3; lin++)
		for(int col=0; col<2; col++)
			if(matriz1[lin][col] % 2 == 0)	
				matriz2[lin][col] = 0;	
			else
				matriz2[lin][col] = 1;
	
			
			printf("matriz 1:");
	for(int l= 0; l<3; l++){
			printf("\n");
			for(int c= 0; c<2; c++)
				printf("\t%d", matriz1[l][c]);
			}
			printf("\n");
			
			printf("matriz 2:");
	for(int l= 0; l<3; l++){
			printf("\n");
			for(int c= 0; c<2; c++)
				printf("\t%d", matriz2[l][c]);
			}
	
	
	return 0;
}
