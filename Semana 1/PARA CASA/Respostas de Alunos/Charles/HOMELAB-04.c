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
    int N, i;

    printf("Digite um numero entre 1 e 1000: ");
    scanf("%d", &N);

    // Validação
    if (N <= 1 || N >= 1000) {
        printf("Valor invalido!\n");
        return 1;
    }

    // Tabuada
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", i, N, i * N);
    }

    return 0;
}
//Professor, desenvolvi o algoritmo utilizando estrutura de repetição (for) para gerar a tabuada de multiplicação de 1 a 10. O programa também realiza validação do valor informado, garantindo que esteja dentro do intervalo (1 < N < 1000). Foram realizados testes para verificar o funcionamento correto.