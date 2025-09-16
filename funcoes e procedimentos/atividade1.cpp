#include <stdio.h>

float media(float soma, int contador){
	float media = soma/contador;
	
	return media;
	
}

int main(){
	int contador= 0;
	int a= 0;
	float soma = 0;
	while (a>=0) {
	 
	printf("me fale um valor qualquer \n");
	scanf("%d", &a );
	if(a>=0){
	contador+= 1;
	soma= soma+a;
	};
	};
	
	float mediax= media(soma, contador);
	printf("%.2f", mediax);
	
	return 0;
}


