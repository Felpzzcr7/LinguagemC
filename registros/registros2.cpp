#include <stdio.h>
#include <string.h>

struct aluno {
  char nome[50];
  float nota;
};

int main() {
  
	struct aluno p[2];

for(int i=0; i<2; i++){
	printf("me de o nome do aluno %d\n", i+1);
	scanf("%s",p[i].nome);
	printf("me de a nota do aluno %d\n", i+1);
	scanf("%f", &p[i].nota);
}

for(int i=0; i<2; i++)
	printf("\n aluno: %s nota: %.2f", p[i].nome, p[i].nota);

if(p[0].nota > p[1].nota)
	printf("\n%s teve a maior nota",p[0].nome);
else if(p[0].nota == p[1].nota)
	printf("\nas notas sao iguais");
else
	printf("\n%s teve a maior nota",p[1].nome);
  return 0;
}
