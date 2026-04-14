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
    int numero = 1;
    while(numero<=10){
        printf("\n Tabuada do %d\n", numero);
        int i;
        for (i = 1; i <= 10; i++)
        {
            printf("%d * %d = %d\n", numero, i, numero * i);
        }
        numero++;
    }
}