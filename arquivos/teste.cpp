#include <stdio.h>
#include <string.h>

<<<<<<< HEAD
int main() {

	FILE *arquivo;

	//Peça ao usuário que digite 5 números inteiros e grave-os em um arquivo numeros.txt, um por linha.
	arquivo = fopen("numeros.txt", "w+"); //usando o arquivo para escrita e leitura ao mesmo tempo

    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }
	
	int x = 1, nro = 0;
	do{
		printf("Digite o %do numero: ",x);
		scanf("%d",&nro);
		fprintf(arquivo, "%d\n",nro);
		x++;
	}while(x<=5);
	
	//Leia o arquivo numeros.txt e mostre todos os valores na tela.
	
	//retornando ao inicio do arquivo para ler as linhas gravadas nele
	fseek(arquivo, 0, SEEK_SET);
	
	char linha[10];
	while (fgets(linha, sizeof(linha), arquivo) != NULL) 
		printf("%s",linha);
	
	fclose(arquivo);
=======

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
>>>>>>> 6485f6c1effb74075b8abdbfc5acd6ce50295855
	
	return 0;
}
