#include <stdio.h>
int fatfunc(int numerof){
	
	int fat = 1;
	for( int i=1; i<=numerof; i++){
		fat *= i;
		
	}
	return fat;
}

int main(){
	int totaln = 0;
	int numerof = 0;
	printf("me diga quantos numeros serao lidos \n");
	scanf("%d", &totaln);
	
	for(int i = 1; i<=totaln; i++){
		printf("me de um numero\n");
		scanf("%d", &numerof);
		int var = fatfunc(numerof);
		printf("o fatorial de: %d e %d\n", numerof, var);
		
	}
	
	
	
	return 0;
	
}
