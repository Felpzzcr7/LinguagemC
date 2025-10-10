
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define QTALUNOS 8
#define QTNOTAS 5

void lerNotas(float[QTALUNOS][QTNOTAS]);

void exibirNotas(float[QTALUNOS][QTNOTAS], float);

float calculartudo(float notas[QTALUNOS][QTNOTAS]);


int main(){
	
	float notas[QTALUNOS][QTNOTAS];
	srand(time(NULL));
	lerNotas(notas);
	
	float soma= calculartudo(notas);
	
	exibirNotas(notas, soma);
	
	return 0;
}

void lerNotas(float notas[QTALUNOS][QTNOTAS]){

	for(int lin=0; lin<QTALUNOS; lin++){
		for(int col=0; col < QTNOTAS-1; col++){
			notas[lin][col] = ((float)rand()/(float)RAND_MAX) * 10;
			

		}
	}
}


void exibirNotas(float notas[QTALUNOS][QTNOTAS], float soma){
	
	for(int i=0; i<QTNOTAS-1; i++)
		printf(" N%d\t",i+1);
	
	printf("soma final= %0.8f\n", soma);
	
	for(int lin=0; lin<QTALUNOS; lin++){
		for(int col=0; col<QTNOTAS-1; col++){
			printf("%0.8f\t",notas[lin][col]);
		}
		printf("\n");
	}
	
		for(int lin=0; lin<QTALUNOS; lin++){
		for(int col=0; col<QTNOTAS-1; col++){
			printf("%0.2f\t",notas[lin][col]);
		}
		printf("\n");
	}
	
}

float calculartudo(float notas[QTALUNOS][QTNOTAS]){
		float soma = 0;
	for(int lin=0; lin<QTALUNOS; lin++){
		for(int col=0; col<QTNOTAS-1; col++)
			soma+=notas[lin][col]; 

	}	
	return soma;
}
