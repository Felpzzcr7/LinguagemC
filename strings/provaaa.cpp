#include <stdio.h>
#include <string.h>


void limpaNome(char[]);
void corrigirNome(char[]);
void limpaCPF(char[]);
int contaNumeros(char[]);
void corrigirCPF(char[]);
void criptografar(char[], int);
void exibirDecripto(char[], int);

int main() {
char nome[100];
 char cpf[15];
 int chave;
 
 printf("Digite o Nome: ");
 gets(nome);
printf("Digite o CPF: ");
 gets(cpf); 
 
 printf("Digite a Chave de Criptografia: ");
 scanf(" %d",&chave);
limpaNome(nome);
 //corrigirNome(nome);
 
 limpaCPF(cpf);
if(contaNumeros(cpf) != 11)
 strcpy(cpf,"000.000.000-00");
 else
 corrigirCPF(cpf); 
 
 
printf("\nNome Corrigido: %s\n",nome);
 printf("CPF Corrigido: %s\n",cpf);

criptografar(nome, chave);
 criptografar(cpf, chave);
 
 printf("\nNome Criptografado: %s\n",nome);
 printf("CPF Criptografado: %s\n",cpf);
 
 printf("\nNome DeCriptografado: ");
 exibirDecripto(nome,chave);
 
 printf("CPF DeCriptografado: ");
 exibirDecripto(cpf,chave);
return 0;
}

void limpaNome(char nome[]){
	int i= 0;
	while(nome[i] != '\0'){
		if(nome[i] >65){
		//	nome[i]= 'a';
		}
		i++;
	}

}
void limpaCPF(char nome[]){
		int i= 0;
	int contsoletra = 0;
	char nomesoletra[100];
	while(nome[i] != '\0'){
		if((nome[i] >= 48) || (nome[i] <= 57)){
			nomesoletra[contsoletra] = nome[i];
			contsoletra++;
		}
		i++;	

	}
	nomesoletra[contsoletra] = '\0';
}
int contaNumeros(char cpf[]){
	int i= 0;
	int contador= 0;
	while(cpf[i]!='\0'){
		i++;
		contador++;
	}
	return contador;
	
}
void corrigirCPF(char cpf[]){
	int i= 0;
	while(i<=14){
		cpf[3] = '.'
		cpf[4] cpf[3]
		cpf[5] cpf[4]
		cpf[6] cpf[5]
		cpf[7] ='.'
		cpf[8] = 	cpf[6] 
		cpf[9]
		cpf[11]
		cpf[12]
		cpf[13] ='-'
		cpf[14] = cpf[13]
		cpf[15] = cpf[14]
		i++;
	
	}
	
}
void criptografar(char nome[], int chave){
	int i= 0;
	while(nome[i]!= '\0'){
		nome[i]= nome[i] - chave;
		i++;
	}
}
void exibirDecripto(char nome[], int chave){
		int i= 0;
	while(nome[i]!= '\0'){
		char decripto= nome[i] + chave;
		printf("%c", decripto);
		i++;
	}
}
