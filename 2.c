#include <stdio.h>
#include <stdlib.h>

int vetor[10000];
int i = 0;
int troquei = 0;

int main() {
    for (i = 0; i < 1000;  i++) {
        vetor[i] = (rand() % 10000);
    }
    
    for (i = 0; i < 10000; i++) {
        printf("%d\n", vetor[i]);
    }

    troquei = 1;
    while (troquei)
    {
        troquei = 0;
        for (i = 0; i < 9999; i++) {
            if (vetor[i] > vetor[i + 1]) {
                int temp = vetor[i];
                vetor[i] = vetor[i +1];
                vetor[i +1] = temp;
                troquei = 1;
            }
        }
    }
    

    for (i = 0; i < 10000; i++) {
        printf("%d\n", vetor[i]);
    }
}