#include <stdio.h>
#include <stdlib.h>

int vetor[10000];
int i = 0;
int achei = 0;
int busca = 0;

int main() {
    for (i = 0; i < 1000;  i++) {
        vetor[i] = (rand() % 10000);
    }

    printf("Digite o valor a ser buscado: ");
    scanf("%d", &busca);

    achei = -1;

    for (i =0; i < 10000; i++) {
        if (vetor[i] == busca) {
            achei = i;
        }
    }

    if (achei == -1) {
        printf("NAO existe");
    } else {
    printf("AChei PORRA, na posicao %d\n", i);
    }
}