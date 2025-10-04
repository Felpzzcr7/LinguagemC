#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
void exibirvetor(float vet1[10], float vet2[10]);
int main(){
	
	float vet1[10];
	float vet2[10];
	for(int  i= 0; i <= 9; i++){
		printf("me diga um numero \n");	
		 scanf("%f",&vet1[i]);
	}
	
	vet2[0]= vet1[0]/2;
	vet2[1]= vet1[1]*3;
	vet2[2]= vet1[2]/2;
	vet2[3]= vet1[3]*3;
	vet2[4]= vet1[4]/2;
	vet2[5]= vet1[5]*3;
	vet2[6]= vet1[6]/2;
	vet2[7]= vet1[7]*3;
	vet2[8]= vet1[8]/2;
	vet2[9]= vet1[9]*3;
	
		exibirvetor(vet1, vet2);

	return 0;
}

void exibirvetor(float vet1[10], float vet2[10]){
	
	for(int  i= 0; i <= 9; i++){
		printf("%.1f  %.1f\n", vet1[i], vet2[i]);	
	}	
}
