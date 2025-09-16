#include <stdio.h>
/*
Escreva um programa que leia uma palavra e a imprima invertida (ex: casa ? asac).
*/

int main() {

	char p[30];
	
	printf("Digite uma palavra: ");
	gets(p);	
	
	//descobrindo o tamanho da palavra
	int tam=0;
	while(p[tam] != '\0')
		tam++;
	
	printf("Palavra invertida: ");
	
	for(int i=tam-1; i>=0; i--)
		printf("%c",p[i]);
	
	return 0;
}
