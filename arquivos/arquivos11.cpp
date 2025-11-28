#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct dados{
	char nome[100];
	int idade;
	char cpf[20];
	char nascimento[20];
	char sexo[15];
	char endereco[200];
	
};

struct dados separaDados(char linha[100]){
	
	struct dados dad;
	int conttemp= 0;
	int contlinha=0;
	char temp[300];
	
	while(linha[contlinha]!= ','){
		temp[conttemp]= linha[contlinha];
		conttemp++;
		contlinha++;
	}
	temp[conttemp]='\0';
	strcpy(dad.nome, temp);
	
	conttemp = 0;
	contlinha++;

	while(linha[contlinha]!= ','){
			temp[conttemp]= linha[contlinha];
			conttemp++;
			contlinha++;
		}
		temp[conttemp]='\0';
		dad.idade= atoi(temp);
		
		conttemp = 0;
		contlinha++;
		
	while(linha[contlinha]!= ','){
			temp[conttemp]= linha[contlinha];
			conttemp++;
			contlinha++;
		}
		temp[conttemp]='\0';
		strcpy(dad.cpf, temp);
		
		conttemp = 0;
		contlinha++;
		
	while(linha[contlinha]!= ','){
			temp[conttemp]= linha[contlinha];
			conttemp++;
			contlinha++;
		}
		temp[conttemp]='\0';
		strcpy(dad.nascimento, temp);
		
		conttemp = 0;
		contlinha++;
		
	while(linha[contlinha]!= ','){
			temp[conttemp]= linha[contlinha];
			conttemp++;
			contlinha++;
		}
		temp[conttemp]='\0';
		strcpy(dad.sexo, temp);
		
		conttemp = 0;
		contlinha++;
	while(linha[contlinha]!= '\0'){
			temp[conttemp]= linha[contlinha];
			conttemp++;
			contlinha++;
		}
		temp[conttemp] = '\0';
		strcpy(dad.endereco, temp);
		
	printf("Nome: %s\n", dad.nome);
	printf("Idade: %d\n", dad.idade);
	printf("CPF: %s\n", dad.cpf);
	printf("Data de Nascimento: %s\n", dad.nascimento);			
	printf("Sexo: %s\n", dad.sexo);			
	printf("Endereco: %s\n", dad.endereco);
		
	

}

int main(){
	FILE *arquivo;
	char texto[500];
	
	arquivo = fopen("dadosPessoas.csv", "r");
	
	if ( arquivo == NULL ) {
		printf("Erro ao abrir o arquivo!\n");
		return 1;
}

	struct dados p[120];
	
	fgets(texto, 500, arquivo);
	int i=0;
	
	while(fgets(texto, 500, arquivo) != NULL){
		p[i]= separaDados(texto);
		i++;
		
	}
	
	fclose(arquivo);
	
	return 0;
}
