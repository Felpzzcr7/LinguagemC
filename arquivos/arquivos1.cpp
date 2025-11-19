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

    fclose(arquivo); // fecha o arquivo

	printf("digite uma frase para que ela apareca no arquivo\n");
	gets(texto);
		
	arquivo = fopen("mensagem.txt", "w");
    
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }
	
	fputs(texto,arquivo);
	fclose(arquivo);

	arquivo = fopen("mensagem.txt", "r");
    
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }
    
    char textoLido[100];
	
	fgets(textoLido, sizeof(textoLido), arquivo);
	
	printf("Texto lido: ");
	puts(textoLido);

    return 0;
}
