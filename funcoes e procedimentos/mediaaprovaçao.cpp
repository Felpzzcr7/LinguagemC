#include <stdio.h>

float somador(float n1, float n2);
void aprovacao(float media, int *aprovado);
int main(){
	float n1, n2, m;
	int aprovado;
	printf("me diga a nota 1  ");
	scanf("%f",&n1);
	printf("me diga a nota 2  ");
	scanf("%f",&n2);
	m= somador(n1, n2);
	printf("%f  \n", m);
	aprovacao(m, &aprovado);
	if(aprovado)
		printf(" aprovado");
	else
		printf(" reprovado");
	return 0;
}

float somador(float n1, float n2){
	float media = (n1+n2)/2;
	return media;
	
}

void aprovacao(float media, int *aprovado){
	if(media>=6)
		*aprovado= 1;
	else
		*aprovado=0;
}
