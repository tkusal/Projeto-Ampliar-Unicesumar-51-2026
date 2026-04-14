/*
    Escreva um programa em C que leie 5 números inteiros armazenando-os em um vetor.
    O programa deverá escrever na tela os 5 números lidos.
*/

#include <stdio.h>

int main() {
    int numeros[5];

    for (int i = 0; i<5; i++) {
        printf("Informe um número: ");
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i<5; i++) {
        printf("%dº número: %d\n", i+1, numeros[i]);
    }

    return 0;
}