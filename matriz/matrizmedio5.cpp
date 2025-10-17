#include <stdio.h>
#include <stdlib.h>

bool simetrico( int [3][3]);

int main(){
	int matriz[3][3];

	for(int lin=0; lin<3; lin++){
		for(int col= 0; col<3; col++){
				matriz[lin][col]= rand() %1;
				printf("%d\t", matriz[lin][col]);
		}
		printf("\n");
		
	}
	
	if(simetrico(matriz))
		printf("eh simetrico");
	else 
		printf("eh falso");
	
		
	
	return 0;
}

bool simetrico( int matriz[3][3]){
	
	for(int lin=0; lin<3; lin++){
		for(int col= 0; col<3; col++){
			if(matriz[lin][col] != matriz[col][lin])
				return false;
		}
	}
		return true;	
}
