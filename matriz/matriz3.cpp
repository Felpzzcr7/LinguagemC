
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define QTALUNOS 5
#define QTNOTAS 5

void lerNotas(float[QTALUNOS][QTNOTAS]);

void exibirNotas(float[QTALUNOS][QTNOTAS]);



int main(){
	
	float notas[QTALUNOS][QTNOTAS];
	srand(time(NULL));
	lerNotas(notas);
	
	exibirNotas(notas);
	
	return 0;
}

void lerNotas(float notas[QTALUNOS][QTNOTAS]){

	for(int lin=0; lin<QTALUNOS; lin++){
		for(int col=0; col < QTNOTAS; col++){
			notas[lin][col] = ((float)rand()/(float)RAND_MAX) * 10;
			

		}
	}
}


void exibirNotas(float notas[QTALUNOS][QTNOTAS]){
	
	for(int i=0; i<QTNOTAS; i++)
		printf(" N%d\t",i+1);
		printf("\n");
		
		for(int lin=0; lin<QTALUNOS; lin++){
		for(int col=0; col<QTNOTAS; col++){
			printf("%0.2f\t",notas[lin][col]);
		}
		printf("\n");
	}
	printf("\n");
	printf("diagonal: ");
	for(int lin=0; lin<QTALUNOS; lin++){
		for(int col=0; col<QTALUNOS; col+=5){
			printf("%0.2f\t",notas[lin][col+lin]);
		}
}
}

