/*
    DESAFIO:

    Escreva uma algoritmo em C que leia 5 números inteiros e armazene em um vetor.
    O programa deverá escrever os 5 números em ORDEM CRESCENTE.

    > Bubble Sort <
*/

#include <stdio.h>

int main() {
    int num[5], aux;

    for(int i =0; i<5; i++) {
        printf("Num %d: ", i+1);
        scanf("%d", &num[i]);
    }

    //Bubble Sort
    for(int i =0; i < 5-1; i++) {
        for (int j= 0; j < 5-1-i; j++) {
            if (num[j] > num[j+1]) {
                aux = num[j];
                num[j] = num[j+1];
                num[j+1] = aux;
            }
        }
    }

    for(int i =0; i<5; i++) {
        printf("%d ", num[i]);
    }

    return 0;
}