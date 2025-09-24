#include <stdio.h>

void lervalor(int *w, int *x, int *y, int *z);
void mostravalor(int w, int x, int y, int z);
int main() {
int W, X, Y, Z;

lervalor( &W, &X, &Y, &Z);
mostravalor(W, X, Y, Z);

return 0;
}

void lervalor(int *w, int *x, int *y, int *z){
printf("digite um valor:");
scanf("%d", w);
printf("digite um valor:");
scanf("%d", x);
printf("digite um valor:");
scanf("%d", y);
printf("digite um valor:");
scanf("%d", z);
}
void mostravalor(int w, int x, int y, int z){
	printf("voce digitou\n");
	printf("%d,%d,%d,%d \n", w, x, y, z);
	int w1= w;
	int x1= x;
	int y1= y;
	int z1= z;
	int recebedor;
	while(recebedor <4){
		w++;
		x++;
		y++;
		z++;
		if( w== 10000){
			printf("%d\n", w1 );
			recebedor++;
		}
		if( x== 10000){
			printf("%d\n", x1 );
			recebedor++;
		}
		if( y== 10000){
			printf("%d\n", y1 );
			recebedor++;
		}
		if( z== 10000){
			printf("%d\n", z1 );
			recebedor++;
		}
	}
}

