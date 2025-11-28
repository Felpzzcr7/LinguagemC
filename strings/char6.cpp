#include <stdio.h>
#include <stdlib.h>

void ler(char[]);

int main() {
    int soma= 0;
	char palavra[100];
	
	ler(palavra);
	
	printf("\nVoce digitou: ");
	puts(palavra);	
	
	int i = 0 ;
	while( palavra[i] != '\0'){
		if(  (palavra[i] >=  48) && (palavra[i] <=57)){
			char felipe = palavra[i];
			soma= soma+ atoi(&felipe);
		}
		
		i++;
	}
	printf("%d e o resultado dessa soma", soma);
	
	return 0;
}
 
 void ler(char x[]){
 	printf("Digite uma frase: ");
	gets(x);
 }
