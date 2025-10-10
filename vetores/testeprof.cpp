#include <stdio.h>
#include <stdlib.h>
#include <time.h>

bool iguais(int[], int[] ,int);

int main(){

	int N = 20;
	int vet1[N], vet2[N];

	srand(time(NULL));// mudando a "semente" dos números aleatórios

	//Dados dois vetores de tamanho N, 
		
	
	for(int i=0; i<N; i++){
		vet1[i] = rand() % (N*2);
		
		vet2[i] = vet1[i]; //iguais
		//vet2[i] = rand() % (N*2); //diferentes
	}
	
	
	//teste a função.
	if( iguais(vet1,vet2,N) )
		printf("Sao Iguais !");
	else
		printf("Sao Diferentes !");
	

return 0;
}

// faça uma função booleana que retorna "true" se os mesmos possuam conteúdo igual e "false" caso contrário, 

bool iguais(int vet1[], int vet2[], int n){
	for(int i=0; i<n; i++)
		if(vet1[i] != vet2[i])
			return false;
	return true;
}
