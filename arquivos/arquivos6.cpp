#include <stdio.h>
#include <string.h>

int main (){
	FILE *arquivo;
	char texto[100];
	
	arquivo= fopen("mensagem.txt", "r");
	  if ( (arquivo == NULL)) {
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }
    
	int caracter= 0;
	while(fgets(texto, 100, arquivo)!= NULL){
		int cont= 0;
		while(texto[cont]!= '\0'){
			caracter++;
			cont++;
		}
		
	}
	
	fclose(arquivo);
	
	printf("\nno arquivo existem %d caracteres\n", caracter);
	return 0;
}
