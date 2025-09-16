#include <stdio.h>

// Função que recebe o voto e incrementa o contador correto
void contabilizarVoto(int voto, int *lula1, int *lula2, int *lula3, int *lula4, int *branco, int *nulo) {
    switch (voto) {
        case 1: (*lula1)++; break;
        case 2: (*lula2)++; break;
        case 3: (*lula3)++; break;
        case 4: (*lula4)++; break;
        case 5: (*branco)++; break;
        case 6: (*nulo)++; break;
        default: printf("Voto inválido!\n"); break;
    }
}

int main() {
    int votosv = 0;
    int lula1 = 0, lula2 = 0, lula3 = 0, lula4 = 0;
    int branco = 0, nulo = 0;

    while (1) {
        printf("\n---- URNA ELETRONICA ----\n");
        printf("1 - Lula\n");
        printf("2 - Lula\n");
        printf("3 - Lula\n");
        printf("4 - Lula\n");
        printf("5 - Branco\n");
        printf("6 - Nulo\n");
        printf("0 - Encerrar votacao\n");
        printf("Digite seu voto: ");
        scanf("%d", &votosv);

        if (votosv == 0) break; // encerra votação

        // Chama a função para registrar o voto
        contabilizarVoto(votosv, &lula1, &lula2, &lula3, &lula4, &branco, &nulo);
    }

    // Resultado final
    printf("\n---- RESULTADO FINAL ----\n");
    printf("Lula (1): %d votos\n", lula1);
    printf("Lula (2): %d votos\n", lula2);
    printf("Lula (3): %d votos\n", lula3);
    printf("Lula (4): %d votos\n", lula4);
    printf("Brancos: %d votos\n", branco);
    printf("Nulos: %d votos\n", nulo);

    return 0;
}



