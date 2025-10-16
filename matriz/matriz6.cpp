#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main (){
	int n=0;
	
	printf("me diga um valor para a matriz:  ");
		scanf("%d", &n);
		
	int matriz[n][n];
	
	for(int l= 0; l<n; l++){
		for(int c= 0; c<n; c++)
			matriz[l][c]= rand() % 40;
	}
		int maior=0;
	for(int l= 0; l<n; l++){
		for(int c= 0; c<n; c++)
		if(matriz[l][c]> maior)
			maior = matriz[l][c];
		
	}
	
		for(int l= 0; l<n; l++){
			printf("\n");
			for(int c= 0; c<n; c++)
				printf("\t%d", matriz[l][c]);
			}
	printf("\n o maior numero eh :%d", maior);
	
	return 0;
}

