#include <stdio.h>
#include <stdlib.h>

void ler(char[]);
void troca(char[],char,char);

int main() {

	char palavra[100];
	char origem;
	char destino;
	
	
	printf("Digite o texto: ");
	gets(palavra);
	
	printf("Digite o caractere que voce quer trocar: ");
	
	scanf(" %c",&origem); 

	printf("Digite o caractere que voce deseja que apareca: ");
	scanf(" %c",&destino);
				
	printf("voce trocou %c pela letra %c",origem,destino);
	
	troca(palavra,origem,destino);
	
	printf("\nResultado: ");
	puts(palavra);	
	
	return 0;
}
 
void troca(char palavra[], char origem, char destino){
	int i=0;
	while(palavra[i] != '\0'){
		if(palavra[i] == origem)
			palavra[i] = destino;
		
		i++;
	}
}

void ler(char x[]){
	printf("Digite uma frase: ");
	gets(x);
}
