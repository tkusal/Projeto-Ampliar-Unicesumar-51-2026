/*
    Escreva um programa que receba duas notas de um aluno e calcule a média.
    O programa deverá retornar se o aluno está aprovado (media >= 6), em recuperação (media < 6 e >5) ou reprovado (media <=5)
*/

#include <stdio.h>

int main()
{
    float nota1, nota2, media;

    printf("Informe a nota 1: ");
    scanf("%f", &nota1);
    printf("Informe a nota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 6.0)
    {
        printf("Aprovado.");
    }
    else if (media <= 5.0)
    {
        printf("Reprovado");
    }
    else
    {
        printf("Em recuperação.");
    }

    return 0;
}