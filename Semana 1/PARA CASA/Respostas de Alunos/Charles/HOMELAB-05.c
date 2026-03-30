/*
    Escreva um programa que que imprima todas as tabuadas de multiplicação de 1 a 9.

    Exemplo:
    1x1 = 1
    1x2 = 2
    ....
    Até 9x9 = 81
*/
#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); // linha em branco entre as tabuadas
    }

    return 0;
}
//Professor, desenvolvi o programa utilizando estruturas de repetição aninhadas (for). O programa percorre os valores de 1 a 9 e imprime todas as combinações de multiplicação entre eles, gerando as tabuadas completas conforme solicitado.