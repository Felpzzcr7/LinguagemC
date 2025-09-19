#include <stdio.h>

int contarvogais(char vogal[]);
int main (){
	char palavra[100];
	printf("me diga uma palavra\n");
		gets(palavra);
	int vogais= contarvogais(palavra);
	printf("No texto tem: %d vogais ", vogais);
return 0;
}

int contarvogais(char vogal[]){
 int v = 0;
 int i=0;
 while(vogal[i] != '\0'){
 
 	if(
	(vogal[i] == 'a') || (vogal[i] == 'A') ||
	(vogal[i] == 'e') || (vogal[i] == 'E') ||
	(vogal[i] == 'i') || (vogal[i] == 'I') ||
	(vogal[i] == 'o') || (vogal[i] == 'O') ||
	(vogal[i] == 'u') || (vogal[i] == 'U')
	 
	 )
	 v++;
	 i++;
	 
	}
	return v;
}
 

