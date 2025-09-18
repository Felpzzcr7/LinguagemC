#include <stdio.h>
void contador(int *cont, int passo);
int main(){
	int xv, passo1, passo2, passo3;
	int cont=0;
	printf("me diga o passo 1: ");
	scanf("%d", &passo1);
	printf("me diga o passo 2: ");
	scanf("%d", &passo2);
	printf("me diga o passo 3: ");
	scanf("%d", &passo3);
	for(xv=0; xv<20; xv++){
		printf("%d\n",cont);
		contador(&cont, passo1);
	
	}
	for(xv=0; xv<20; xv++){
		contador(&cont, passo2);
		printf("%d\n",cont);
	}
		for(xv=0; xv<20; xv++){
		contador(&cont, passo3);
		printf("%d\n",cont);
	}
	
}

void contador(int *cont, int passo){
	*cont+=passo;
}
