#include <stdio.h>

float somador(float n1, float n2);

int main(){
	float n1, n2, m;
	printf("me diga a nota 1  ");
	scanf("%f",&n1);
	printf("me diga a nota 2  ");
	scanf("%f",&n2);
	m= somador(n1, n2);
	printf("%f  ", m);
	
	return 0;
}

float somador(float n1, float n2){
	float media = (n1+n2)/2;
	return media;
	
}
