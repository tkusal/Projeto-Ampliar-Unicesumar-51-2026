/*
    Leia um valor inteiro N, tal que 1 < N < 1000.
    A seguir, mostre a tabuada multiplicação de 1 a 10 deste número.

    Exemplo:
    1 x N = N
    2 x N = 2N
    ....até 10 x N = 10N.
*/

#include <stdio.h>

int main() {
    int n;

    printf("Informe um número inteiro, tal que 1 < N < 1000: ");
    scanf("%d", &n);

    if (n < 1 || n > 1000) {
        printf("Valor inválido.\n");
        return 0;
    }

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d \n", n, i, n*i);
    }

    return 0;
}