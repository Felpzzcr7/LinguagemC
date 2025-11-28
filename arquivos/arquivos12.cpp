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
		
		return dad;
}
	void exibe(struct dados pessoa){
		printf("Nome: %s\n", pessoa.nome);
		printf("Idade: %d\n", pessoa.idade);
		printf("CPF: %s\n", pessoa.cpf);
		printf("Data de Nascimento: %s\n", pessoa.nascimento);			
		printf("Sexo: %s\n", pessoa.sexo);			
		printf("Endereco: %s\n", pessoa.endereco);			
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
	char cpfdigitado[20];
	printf("Informe o CPF no formato XXX.XXX.XXX-XX: ");
	gets(cpfdigitado);
	
	struct dados dad;

	bool encontrou = false;
	
	
	while(fgets(texto, 500, arquivo) != NULL){
		dad = separaDados(texto);
			if(strcmp(dad.cpf, cpfdigitado) == 0){
				encontrou= true;
				break;
		}
			
	}
	
	if(encontrou == true)
		exibe(dad);
		
	else
		printf("cpf nao encontrado");
	
	fclose(arquivo);
	
	return 0;
}
