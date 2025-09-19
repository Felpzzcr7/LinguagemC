
#include <stdio.h>
void contarpalavra( char frase[]);
void lerchar( char frase[]);
int main (){
	char frase[100];
	lerchar(frase);
	printf("voce digitou:   ");
	puts(frase);
	contarpalavra(frase);
return 0;
}
void lerchar( char frase[]){
	printf("me escreva uma frase:\n");
		gets(frase);
}

void contarpalavra( char frase[]){
	int contador =1;
	int i =0;
	while(frase[i] != '\0'){
		if ( frase[i] == ' ')
		contador++;
		
	i++;
		
	}
	printf("\nessa frase possui %d palavras", contador);
	
}
