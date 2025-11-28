#include <stdio.h>
/*Crie um procedimento paraMaiusculas(char[]) que transforma todas as letras minúsculas em maiúsculas
 sem usar strupr(), alterando os caracteres manualmente. Teste-a.*/

void paraMaiusculas(char[]);
void ler(char[]);

int main() {

	char palavra[100];
	
	ler(palavra);
	
	printf("\nVoce digitou: ");
	puts(palavra);	
	
	paraMaiusculas(palavra);
	
	printf("\nEm maiusculas: ");
	puts(palavra);	
	
	
	return 0;
}
 
 void ler(char x[]){
 	printf("Digite uma frase: ");
	gets(x);
 }
 
 void paraMaiusculas(char x[]){
 	
 	int i = 0;
 	
 	//navegando pela frase de 0 até encontrar o \0
 	while(x[i] != '\0'){
		// se a letra encontrada for minuscula
		if( (x[i] >= 97) && (x[i] <= 122) )
			x[i] -= 32; //decrementa 32 da letra (veja a tabela ascii)  		
		i++;
	}
	 
 }
