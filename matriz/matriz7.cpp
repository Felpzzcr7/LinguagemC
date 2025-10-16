#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main (){
	int n=0;
	int m=0;
	srand(time(NULL));
	
	printf("me diga um valor para a linha da matriz:  ");
		scanf("%d", &n);
		printf("me diga um valor para a coluna da matriz:  ");
		scanf("%d", &m);
		
	int matriz[n][m];
	
	for(int l= 0; l<n; l++){
		for(int c= 0; c<m; c++)
			matriz[l][c]= rand() % 40;
	}
		int par=0;
		int impar=0;
	for(int l= 0; l<n; l++){
		for(int c= 0; c<m; c++)
		if(matriz[l][c] % 2 == 0)
			par++;
		else
			impar++;
		
	}
	
		for(int l= 0; l<n; l++){
			printf("\n");
			for(int c= 0; c<m; c++)
				printf("\t%d", matriz[l][c]);
			}
	printf("\n numeros pares:%d", par);
	printf("\n numeros impares:%d", impar);
	return 0;
}

