#include <stdio.h>
#include <string.h>


int main() {
	
	// Leia um arquivo e verifique se uma palavra específica (digitada pelo usuário) aparece no texto.

	FILE *arqEntrada;

	arqEntrada = fopen("mensagem.txt", "r"); 
	
    if ( arqEntrada == NULL ) {
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }
	char palavraDigitada[100];
	
	printf("Digite a palavra a ser pesquisada no arquivo: ");
	scanf("%s", palavraDigitada);
	
	int tamanhoPalavra = strlen(palavraDigitada);
	
	char linha[100];
	bool encontrou = false;
	
	while (fgets(linha, sizeof(linha), arqEntrada) != NULL) {
		int tamanhoLinha = strlen(linha);	
		for(int i=0; i<=tamanhoLinha - tamanhoPalavra; i++){
			int j=0;
			while(j<tamanhoPalavra && linha[i+j] == palavraDigitada[j])
				j++;
			if(j==tamanhoPalavra){
				encontrou = true;
				break;
			}
		}
		if(encontrou)
			break;
	}
	
	if(encontrou)
		printf("%s encontrado no arquivo !", palavraDigitada);
	
		
	fclose(arqEntrada);
	
	return 0;
}
