#include <stdio.h>
#include <string.h>

int main (){
	FILE *arquivo, *copia;
	char texto[100];
	
	arquivo= fopen("mensagem.txt", "r");
	copia= fopen("copiamsg.txt", "w");
	
	  if ( (arquivo == NULL) || (copia == NULL)) {
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }
	
	while(fgets(texto, 100, arquivo)!= NULL){
		fprintf(copia, "%s", texto);
	}
	
	fclose(arquivo);
	fclose(copia);
	
	return 0;
}
