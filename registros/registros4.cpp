#include <stdio.h>
#include <string.h>

struct data {
    int dia;
	int mes;
	int ano;
};

int main() {
  
	struct data p1;


	printf("me de o dia\n");
	scanf("%d", &p1.dia);
	printf("me de o mes\n");
	scanf("%d", &p1.mes);
		printf("me de o ano\n");
	scanf("%d", &p1.ano);

	printf("\n %d/%d/%d", p1.dia, p1.mes, p1.ano);
}
