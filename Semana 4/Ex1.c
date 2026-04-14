/*
    Escreva um programa em C que leie 5 números inteiros armazenando-os em um vetor.
    O programa deverá informar qual o maior e o menor número.
*/

#include <stdio.h>

int main() {
    int numeros[5], maior, menor;

    for (int i = 0; i<5; i++) {
        printf("Informe um número: ");
        scanf("%d", &numeros[i]);

        if (i == 0) {
            maior = numeros[i];
            menor = numeros[i];
        }

        if (numeros[i] > maior) {
            maior = numeros[i];
        }

        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    printf("Maior Número: %d\nMenor Número: %d", maior, menor);

    return 0;
}