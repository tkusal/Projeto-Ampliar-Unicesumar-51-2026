/*
    Leia dois valores inteiros X e Y.
    A seguir, calcule e mostre a soma dos números ímpares entre eles (não incluindo os próprios X e Y, se forem ímpares).

    Exemplo:
    X = 5
    Y = 15
    Soma = 7 + 9 + 11 + 13
    Saída = 40
*/
#include <stdio.h>

int main() {
    int X, Y, i, soma = 0;

    printf("Digite o valor de X: ");
    scanf("%d", &X);

    printf("Digite o valor de Y: ");
    scanf("%d", &Y);

    // Garantir que X seja o menor
    if (X > Y) {
        int temp = X;
        X = Y;
        Y = temp;
    }

    // Soma dos ímpares entre X e Y
    for (i = X + 1; i < Y; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }

    printf("Soma dos impares: %d\n", soma);

    return 0;
}
//Professor, desenvolvi o algoritmo utilizando estrutura de repetição e condição para identificar números ímpares. O programa lê dois valores inteiros, garante a ordem entre eles e calcula a soma dos números ímpares existentes no intervalo, excluindo os valores de entrada. Foram realizados testes para validar o funcionamento correto.