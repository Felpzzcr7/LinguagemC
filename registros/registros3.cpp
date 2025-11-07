#include <stdio.h>
#include <string.h>

struct retangulo {
  float altura;
  float largura; 
};

float calculaarea(struct retangulo p1){
	float area= p1.altura*p1.largura;
	return area;
}

int main() {
  	float area = 0;
	struct retangulo p1;
	
	p1.altura= 10;
	p1.largura=10;
	
	area= calculaarea(p1);
	
	printf(" A area eh %.2f", area);

	
	return 0;
}
