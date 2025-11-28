#include <stdio.h>
#include <string.h>

int main (){
	 FILE *arquivo;
	 char texto[100];
	 
	 arquivo = fopen("cadastros.txt", "a");
	 
	 if ( arquivo == NULL ) {
		printf("Erro ao criar o arquivo!\n");
		return 1;
	}
	 
	 int n= 3;
	 int idade;
	 char nome[100];
	 
	 
	 for(int i=0; i<n; i++){
	 	printf("me diga seu nome\n");
	 	gets(nome);
	 	printf("me diga a sua idade\n");
	 	scanf("%d", &idade);
	 	getchar();

			fprintf(arquivo,"%d- %s\n idade: %d\n\n", i+1, nome, idade);
	 }
	 
	 fclose(arquivo);
	 
	return 0; 
}
