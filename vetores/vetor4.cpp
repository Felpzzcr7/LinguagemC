#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <vector>


void geravetor (int vet1[20], int vet2[20], int vet3[20], int vet4[20], int vet5[20]);

int main(){
	int n= 20; 
	int vet1[n], vet2[n],vet3[n],vet4[n],vet5[n];
	
	for(int i=0; i<n; i++){
		 vet1[i]= rand() % n*2;
		 vet2[i]= rand() % n*2; 
	}
	geravetor(vet1,vet2,vet3,vet4,vet5);
	
	for(int i=0; i<n; i++)
	printf("%d \t %d \t %d \t %d \t %d \n", vet1[i],vet2[i],vet3[i],vet4[i],vet5[i]);
	
	
	return 0;
}

void geravetor (int vet1[20], int vet2[20], int vet3[20], int vet4[20], int vet5[20]){
	
	for(int i=0; i<20; i++){
	vet3[i]= vet1[i] - vet2[i];
	vet4[i]= vet1[i] + vet2[i];
	vet5[i]= vet1[i] * vet2[i];
	}
}
