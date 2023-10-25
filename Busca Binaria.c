#include <stdio.h>

int vetor[10000];
int i = 0;
int achei = 0;
int busca = 0;
int inicio = 0;
int fim = 0;
int meio = 0;

int main() {
    for (i = 0; i < 1000;  i++) {
        vetor[i] = i;
    }

    printf("Digite o valor a ser buscado: ");
    scanf("%d", &busca);
    inicio = 0;
    fim = 9999;

    while (fim >= inicio) {
        meio = ((inicio + fim) / 2);
        if (busca == vetor[meio]) {
            printf("AChei PORRA, na posicao %d\n", i);
            return 0;
        } else if (busca > vetor[meio]) {
            inicio = (meio + 1);
        } else {
            fim = (meio - 1);
        }
    }
    printf("NAO existe");
}
