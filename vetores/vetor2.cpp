#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
void exibirvetor(int vet1[10], int vet2[10]);
int main(){
	
	int vet1[10];
	int vet2[10];
	for(int  i= 0; i <= 9; i++){
		printf("me diga um numero \n");	
		 scanf("%i",&vet1[i]);
	}
	
	vet2[0]= vet1[9];
	vet2[1]= vet1[8];
	vet2[2]= vet1[7];
	vet2[3]= vet1[6];
	vet2[4]= vet1[5];
	vet2[5]= vet1[4];
	vet2[6]= vet1[3];
	vet2[7]= vet1[2];
	vet2[8]= vet1[1];
	vet2[9]= vet1[0];
	
		exibirvetor(vet1, vet2);

	return 0;
}

void exibirvetor(int vet1[10], int vet2[10]){
	
	for(int  i= 0; i <= 9; i++){
		printf("%i  %i\n", vet1[i], vet2[i]);	
	}	
}
