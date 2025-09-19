#include <stdio.h>
int main(){
	char p[20];
	printf("Digite uma frase: ");
	gets(p);
	int cont= 0;
	while(p[cont] != '\0'){
	 	cont++;
	}
	for(int i=cont-1; i>=0 ; i--)
		printf("%c", p[i]);
}
