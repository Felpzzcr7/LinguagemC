#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <vector>

void exibe(int[], int);

int main() {
	
	int N = 10;
	
	int vet[N];
	
	
	srand(time(NULL)); // mudando a "semente" dos números aleatórios
	
	for(int i=0; i<N; i++){
		vet[i] = rand() % 10; // gerando números aleatórios entre 0 e 9
	}
	
	exibe(vet,N);

	return 0;
}

void exibe(int vet[], int N){

	for(int i=0; i<N; i++) 
		printf("%d \n",vet[i]);

}
