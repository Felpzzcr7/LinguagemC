#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main (){
	int n=7;
	int m=7;
	srand(time(NULL));
	
	int matriz[n][m];
	int matrizcopia[n][m];
	
	for(int l= 0; l<n; l++){
		for(int c= 0; c<m; c++)
			matriz[l][c]= rand() % 40;
	}	
		for(int l= 0; l<n; l++){
		for(int c= 0; c<m; c++)
			matrizcopia[l][c]= matriz[l][c];
	}
	
	for(int l= 0; l<n; l++){
			printf("\n");
			for(int c= 0; c<m; c++)
				printf("\t%d", matriz[l][c]);
			}
	
	for(int c= 0; c<m; c++)
		matriz[6][c] = 	matriz[0][c] ;
			
	for(int c= 0; c<m; c++)
		matriz[0][c]  =	matrizcopia[6][c] ;
	
		
	printf("\n matriz com as linhas trocadas");
	
	for(int l= 0; l<n; l++){
			printf("\n");
			for(int c= 0; c<m; c++)
				printf("\t%d", matriz[l][c]);
			}
		
		
	return 0;
}
