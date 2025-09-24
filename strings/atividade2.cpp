#include <stdio.h>
/*
Escreva um programa que leia uma string e chama a função int contarVogais(char[]) 
que conta e retorna quantas vogais (a, e, i, o, u) ela possui. Exiba o resultado.
*/

int contarvogais(char[]);

int main() {

	char t[100];
	
	printf("Digite um texto: ");
	gets(t);	
	
	int vogais = contarvogais(t);
		
	printf("No texto existem %d vogais.",vogais);
	
	return 0;
}
 

int contarvogais(char t[]){
	int v= 0;
	int i = 0;
	
	while(t[i] != '\0'){
		if (
			
			(t[i] == 'a')  || (t[i] == 'A') ||  
		 	(t[i] == 'e')  || (t[i] == 'E') ||
		 	(t[i] == 'i')  || (t[i] == 'I') ||
		 	(t[i] == 'o')  || (t[i] == 'O') ||
			(t[i] == 'u')  || (t[i] == 'U') 
		)
		v++;
		i++;
	}
	return v;
}

