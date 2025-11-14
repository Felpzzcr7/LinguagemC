#include <stdio.h>
#include <string.h>

struct livro {
    char titulo[100];
    char autor[100];
    int pag;
};

int main() {
    struct livro p[5];

    for (int i = 0; i < 5; i++) {
        printf("Me de o nome do livro:\n");
        scanf(" %s", p[i].titulo);

        printf("Me de o autor:\n");
        scanf(" %s", p[i].autor);

        printf("Me de o número de páginas:\n");
        scanf("%d", &p[i].pag);
    }

    int maior = 0;
    for (int i = 1; i < 5; i++) {
        if (p[i].pag > p[maior].pag) {
            maior = i;
        }
    }

    printf("\ntitulo:%s\n autor:%s\n paginas:  %d", p[maior].titulo, p[maior].autor, p[maior].pag);

    return 0;
}

