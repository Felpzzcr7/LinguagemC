
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define QTALUNOS 4
#define QTNOTAS 4

void lerNotas(int[QTALUNOS][QTNOTAS]);

void exibirNotas(int[QTALUNOS][QTNOTAS]);



int main(){
	
	int notas[QTALUNOS][QTNOTAS];
	srand(time(NULL));
	lerNotas(notas);
	
	exibirNotas(notas);
	
	return 0;
}

void lerNotas(int notas[QTALUNOS][QTNOTAS]){

	for(int lin=0; lin<QTALUNOS; lin++){
		for(int col=0; col < QTNOTAS; col++){
			notas[lin][col] = rand() % 10;
			

		}
	}
}


void exibirNotas(int notas[QTALUNOS][QTNOTAS]){
	int diagonalsec[4];
	int soma2= 0;
	for(int i=0; i<QTNOTAS; i++)
		printf("\n");
		
		for(int lin=0; lin<QTALUNOS; lin++){
		for(int col=0; col<QTNOTAS; col++){
			printf("%d\t",notas[lin][col]);
		}
		printf("\n");
	}
	printf("\n");
	printf("diagonal pricipal: ");
		for(int lin=0; lin<QTALUNOS; lin++){
			for(int col= 0; col<QTALUNOS; col++){
				if(lin==col){
				soma2 += notas[lin][col];
					printf("%d\t",notas[lin][col]);
		}
			}
				
}
		int i= 0;
			for(int x =3; x >= 0; x--){
		diagonalsec[i]= notas [i][x];
				i++;
					}
	
	printf("diagonal secundaria:");
	for(int i=0; i<4; i++)
		printf("\t%d", diagonalsec[i]);
		
		int soma= 0;
		
	for(int i=0; i<4; i++)
		soma += diagonalsec[i];
		
		printf("\n");
		printf("\n");
	printf("soma da diagonal pricipal: %d", soma2);
		printf("\n");
		printf("\n");
	printf("soma da diagonal secundaria: %d", soma);
}
