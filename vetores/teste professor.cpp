#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <vector>

void exibe(int[], int);

int main() {
	
	int N = 10;
	
	int vet[N];
	
	
	srand(time(NULL)); // mudando a "semente" dos n�meros aleat�rios
	
	for(int i=0; i<N; i++){
		vet[i] = rand() % 10; // gerando n�meros aleat�rios entre 0 e 9
	}
	
	exibe(vet,N);

	return 0;
}

void exibe(int vet[], int N){

	for(int i=0; i<N; i++) 
		printf("%d \n",vet[i]);

}
