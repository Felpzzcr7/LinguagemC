#include <stdio.h>
#include <stdlib.h>



int main() {
    FILE *arquivo;
    char texto[100];
    
	arquivo = fopen("numeros.txt", "r");
	
	 if (arquivo == NULL) {
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }
    
    
    int contador= 0; 
    while(fgets(texto,100,arquivo)!= NULL){
    	contador++;
	}
	
	printf("o arquivo possui %d linhas", contador);
	
	

fclose(arquivo); // fecha o arquivo

	
return 0;
}
