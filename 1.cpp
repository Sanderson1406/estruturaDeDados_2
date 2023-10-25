#include <stdio.h>
#include <stdlib.h>

int vetor[10000];
int i = 0;
int j = 0;

int main() {
    for (i = 0; i < 1000;  i++) {
        vetor[i] = (rand() % 10000);
    }
    
    for (i = 0; i < 10000; i++) {
        printf("%d\n", vetor[i]);
    }

    for (i = 0; i < 9999; i++) {
        for (j= (i +1); j < 10000; j++) {
            if (vetor[i] > vetor[j]){
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }

    for (i = 0; i < 10000; i++) {
        printf("%d\n", vetor[i]);
    }
}