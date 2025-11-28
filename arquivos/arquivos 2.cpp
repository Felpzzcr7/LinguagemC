#include <stdio.h>
#include <stdlib.h>



int main() {
    FILE *arquivo;
    char texto[100];
    
    arquivo = fopen("mensagem.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }

	printf("digite uma frase para que ela apareca no arquivo\n");
	gets(texto);
	fputs(texto, arquivo);

    fclose(arquivo); // fecha o arquivo


	
	arquivo = fopen("mensagem.txt", "a");
    
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }
    
		printf("digite uma nova linha\n");
	gets(texto);
	fputs(texto, arquivo);
	
		printf("digite uma nova linha\n");
	gets(texto);
	fputs(texto, arquivo);
	
		printf("digite uma nova linha\n");
	gets(texto);
	fputs(texto, arquivo);
	
	fclose(arquivo);
	

	
return 0;
}
