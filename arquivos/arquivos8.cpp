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
	int cont=0;
	
	while(fgets(texto, 100, arquivo)!= NULL){
		while(texto[cont]!= '\0'){
			if((texto[cont]>96) && (texto[cont]<123) ){
				texto[cont]= texto[cont]-32;
			}
			cont++;
		}
		fprintf(copia, "%s", texto);
	}
	
	fclose(arquivo);
	fclose(copia);
	
	return 0;
}
