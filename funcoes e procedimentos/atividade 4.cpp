#include <stdio.h>


int menu ();

int main(){
	int opc;
    int lula = 0, bolsonaro = 0, trump = 0, marcal = 0;
    int branco = 0, nulo = 0;
	while(1){
		opc = menu();
        if(opc == 0) break;
		switch(opc){
			
		case 1:
			printf("voce votou no nove dedos");
			lula++;
			break;
		case 2:
            printf("Voce votou no Bolsonaro!\n");
            bolsonaro++;
            break;
        case 3:
            printf("Voce votou no Trump!\n");
            trump++;
            break;
        case 4:
            printf("Voce votou no Pablo Marcal!\n");
            marcal++;
            break;
        case 5:
            printf("Voce votou em Branco!\n");
            branco++;
            break;
        case 6:
            printf("Voce votou Nulo!\n");
            nulo++;
            break;
        default:
            printf("Opcao invalida! Tente novamente.\n");
		}
	}
	printf("\n--- RESULTADO FINAL ---\n");
    printf("Lula: %d votos\n", lula);
    printf("Bolsonaro: %d votos\n", bolsonaro);
    printf("Trump: %d votos\n", trump);
    printf("Pablo Marcal: %d votos\n", marcal);
    printf("Branco: %d votos\n", branco);
    printf("Nulo: %d votos\n", nulo);

	return 0;
}
int menu (){
	int opcao;
	printf("\n---- URNA ELETRONICA ----\n");
        printf("1 - Lula\n");
        printf("2 - Bolsonaro\n");
        printf("3 - Trump\n");
        printf("4 - Pablo Marcal\n");
        printf("5 - Branco\n");
        printf("6 - Nulo\n");
        printf("0 - Encerrar votacao\n");
        printf("Digite seu voto: ");
        scanf("%d", &opcao);
        return opcao;
}


