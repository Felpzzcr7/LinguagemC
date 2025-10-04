#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <vector>

int main(){
	
	int vet[10];
	for(int  i= 0; i <= 9; i++){
		printf("me diga um numero \n");	
		 scanf("%i",&vet[i]);
	}

		for(int  i= 0; i <= 9; i++){
		printf("%i\n", vet[i]);	
	}
		for(int  i = 9; i >= 0; i--){
		printf("%i\n", vet[i]);	
	}
	return 0;
}
