#include <stdio.h>
#include <conio.h>

int main(){
	float notas[5]= {10,5,3,4,8};
	
	
	float somatotal= notas[0]+notas[1]+notas[2]+notas[3]+notas[4];
	float media= somatotal/5;
	printf("vou mostrar a soma de todas as notas: %.1f\n", somatotal);
	printf("vou mostrar a media das notas: %.1f\n", media);
	
	
	return 0;
}
