#include <stdio.h>
#include <string.h>

struct ContaBancaria{
	char nome[100];
	int saldo;
};

void depositar(ContaBancaria*, int);
void sacar(ContaBancaria*, int);

int main(){
	struct ContaBancaria c1;
	int escolha= 0;
	int deposito;
	int saque;
	c1.saldo= 0;
	printf("me diga seu nome\n");
	scanf("%s", c1.nome);
	printf("SEU SALDO: %d\n", c1.saldo);
	
	while(escolha != 3){
		printf("escolha uma opcao\n1-depositar\n2-sacar\n3-sair\n");
	scanf("%d", &escolha);
	
	if(escolha==1){
	printf("quanto voce quer depositar?\n");
		scanf("%d", &deposito);
		depositar(&c1, deposito );	
		}
		
	else if(escolha==2){
			printf("quanto voce quer sacar?\n");
			scanf("%d", &saque);
			sacar(&c1, saque);
		
	}
	
	else if(escolha == 3)
		printf("o programa sera fechado\n");
		
	else 
		printf("digite novamente\n");
		
	printf("saldo atual: %d\n", c1.saldo);
	
	}
		
	
	return 0;
}

void depositar(ContaBancaria *c, int deposito){
	(*c).saldo+=deposito;
	
}

void sacar(ContaBancaria *c, int saque){
	if((*c).saldo>=saque)
		(*c).saldo = (*c).saldo-saque;
		
	else
		printf("voce nao tem saldo suficiente\n");
	
	
}
