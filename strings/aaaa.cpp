#include <stdio.h>
#include <stdlib.h>
/*Dada uma string que cont�m letras e n�meros, crie outra string contendo apenas as letras.
Exemplo:
Entrada: "a1b2c3"
Sa�da: "abc"

*/

void troca(char[],char[]);

int main() {

	char texto[100];
	char textoSemNumeros[100];

	
	printf("Digite o texto: ");
	gets(texto);

			
	troca(texto, textoSemNumeros);
	
	printf("\nResultado: ");
	puts(textoSemNumeros);	
	
	return 0;
}
 
void troca(char texto[], char textoSemNumeros[]){
	int contSemNumeros = 0;
	
	int i=0;
	while(texto[i] != '\0'){
		if( (texto[i] < 48) || (texto[i] > 57) ){
			textoSemNumeros[contSemNumeros] = texto[i];
			contSemNumeros++;
		}
		i++;
	}
	textoSemNumeros[contSemNumeros] = '\0';
}
