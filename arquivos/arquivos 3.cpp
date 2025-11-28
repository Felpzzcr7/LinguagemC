#include <stdio.h>
#include <stdlib.h>



int main() {
    FILE *arquivo;
    char texto[100];
    
    arquivo = fopen("numeros.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }
    
    int x= 1;

while(x<=5){
		printf("digite um numero para que ele apareca no arquivo\n");
	gets(texto);
	fputs(texto, arquivo);
	fputs("\n", arquivo); // quebra de linha
	x++;
}
    fclose(arquivo); // fecha o arquivo

	arquivo = fopen("numeros.txt", "r");
	 if (arquivo == NULL) {
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }
    
    printf("\n numeros lidos \n");
    
    while(fgets(texto,100,arquivo)!= NULL){
    	printf("%s", texto);
	}
	

fclose(arquivo); // fecha o arquivo

	
return 0;
}
