#include <stdio.h>
#include <string.h>

struct produto {
  char nome[50];
  float valor;
};

int main() {
  
	struct produto p[3];

for(int i=0; i<3; i++){
	printf("me de o nome do produto %d\n", i+1);
	scanf("%s",p[i].nome);
	printf("me de o valor do produto %d\n", i+1);
	scanf("%f", &p[i].valor);
}

for(int i=0; i<3; i++)
	printf("\n produto: %s valor: %.2f", p[i].nome, p[i].valor);


  return 0;
}
