
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define QTALUNOS 6
#define QTNOTAS 7

void lerNotas(float[QTALUNOS][QTNOTAS]);

void exibirNotas(float[QTALUNOS][QTNOTAS]);

void calculartudo(float notas[QTALUNOS][QTNOTAS]);


int main(){
	
	float notas[QTALUNOS][QTNOTAS];
	srand(time(NULL));
	lerNotas(notas);
	calculartudo(notas);
	exibirNotas(notas);
	
	return 0;
}

void lerNotas(float notas[QTALUNOS][QTNOTAS]){

	for(int lin=0; lin<QTALUNOS; lin++){
		for(int col=0; col < QTNOTAS-1; col++){
			notas[lin][col] = ((float)rand()/(float)RAND_MAX) * 10;
			

		}
	}
}


void exibirNotas(float notas[QTALUNOS][QTNOTAS]){
	
	for(int i=0; i<QTNOTAS-1; i++)
		printf(" N%d\t",i+1);		
	
		printf("\n");
		for(int lin=0; lin<QTALUNOS; lin++){
		for(int col=0; col<QTNOTAS; col++){
			printf("%0.2f\t",notas[lin][col]);
		}
		printf("\n");
	}
	
}

void calculartudo(float notas[QTALUNOS][QTNOTAS]){
	for(int lin=0; lin<QTALUNOS; lin++){
		float soma = 0;
		for(int col=0; col<QTNOTAS-1; col++)
			soma+=notas[lin][col];
		notas[lin][QTNOTAS-1] = soma;
	}

}
