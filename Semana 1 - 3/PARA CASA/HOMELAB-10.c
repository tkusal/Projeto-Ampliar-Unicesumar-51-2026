/*
    Na matemática, um Número Primo é aquele que pode ser dividido somente por 1 (um) e por ele mesmo.
    Por exemplo, o número 7 é primo, pois pode ser dividido apenas pelo número 1 e pelo número 7.
    Escreva um programa que leia um número e diga se ele é primo ou não.
*/

#include <stdio.h>

int main()
{
    int numero;

    printf("Informe o número: ");
    scanf("%d", &numero);

    if (numero <= 1)
    {
        printf("Não é primo.");
        return 0;
    }

    for (int i = 2; i < numero; i++)
    {
        if (numero % i == 0)
        {
            printf("Não é primo.");
            return 0;
        }
    }

    printf("É primo.");

    return 0;
}