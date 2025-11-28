#include <stdio.h>
#include <string.h>

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
	
	return 0;
}
