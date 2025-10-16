#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main (){
	int n;
	printf("me informe a proporcao da matriz ");
	scanf("%d", &n);
	
	int matriz1[n][n];
	int matriz2[n][n];
	int soma [n][n];
	for(int l= 0; l<n; l++)
		for(int c= 0; c<n; c++)
			matriz1[l][c]= rand() % 40;
			
	for(int l= 0; l<n; l++)
		for(int c= 0; c<n; c++)
			matriz2[l][c]= rand() % 40;
			
			printf("matriz 1:");
	for(int l= 0; l<n; l++){
			printf("\n");
			for(int c= 0; c<n; c++)
				printf("\t%d", matriz1[l][c]);
			}
			printf("\n");
			
			printf("matriz 2:");
	for(int l= 0; l<n; l++){
			printf("\n");
			for(int c= 0; c<n; c++)
				printf("\t%d", matriz2[l][c]);
			}
	
			printf("\n");
			
			printf("soma das duas:");
			
	for(int l= 0; l<n; l++)
		for(int c= 0; c<n; c++)
			soma[l][c]= matriz2[l][c] + matriz1[l][c];
			
	for(int l= 0; l<n; l++){
			printf("\n");
			for(int c= 0; c<n; c++)
				printf("\t%d", soma[l][c]);
			}
	
	return 0;
}
