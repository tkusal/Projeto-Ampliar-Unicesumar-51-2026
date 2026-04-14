/*
    Escreva um algoritmo que leia um número inteiro. O algoritmo deverá informar se este número é par ou ímpar
    e informar se é um número positivo ou negativo. Nesta atividade, conside o 0 (zero) como um número positivo e par.
*/

#include <stdio.h>

int main()
{
    int numero;

    printf("Qual o numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        if (numero >= 0)
        {
            printf("%d é par e positivo", numero);
        }
        else
        {
            printf("%d é par e negativo", numero);
        }
    }
    else
    {
        if (numero >= 0)
        {
            printf("%d é impar e positivo", numero);
        }
        else
        {
            printf("%d é impar e negativo", numero);
        }
    }

    return 0;
}