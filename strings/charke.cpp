#include <stdio.h>

void lerchar( char frase[]);
bool palindromo(char palavra[]);
int main(){
	char palavra[100];	
	
	lerchar(palavra);
	printf("voce digitou: %s", palavra);
	//puts(palavra);
	
	if(palindromo(palavra))
		printf(" \n isso eh um palindromo", palavra);
	else
		printf(" \n isso nao eh um palindromo hahaahahahah", palavra);
}
void lerchar( char palavra[]){
	printf("me escreva uma frase:\n");
		gets(palavra);
}

bool palindromo(char palavra[]){	
	int cont= 0;
	while(palavra[cont] != '\0')
	 	cont++;
  	
	bool pali= true;
	
	
	for(int i=0, j=cont-1; i<j ; i++, j--)
		if(palavra[i] != palavra[j])
		pali = false;
		
	return pali;
}
