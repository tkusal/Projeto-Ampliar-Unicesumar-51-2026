/*
    Na matemática, um Número Primo é aquele que pode ser dividido somente por 1 (um) e por ele mesmo.
    Por exemplo, o número 7 é primo, pois pode ser dividido apenas pelo número 1 e pelo número 7.
    Escreva um programa que leia um número e diga se ele é primo ou não.
*/
#include <stdio.h>

int main() {
    int num, i, ehPrimo = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    // Números menores ou iguais a 1 não são primos
    if (num <= 1) {
        ehPrimo = 0;
    } else {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                ehPrimo = 0;
                break;
            }
        }
    }

    if (ehPrimo) {
        printf("O numero eh PRIMO\n");
    } else {
        printf("O numero NAO eh PRIMO\n");
    }

    return 0;
}
//Professor, desenvolvi o algoritmo em linguagem C utilizando estrutura de repetição para verificar se um número possui divisores além de 1 e dele mesmo. O programa identifica corretamente se o número é primo ou não, considerando também casos especiais como números menores ou iguais a 1.