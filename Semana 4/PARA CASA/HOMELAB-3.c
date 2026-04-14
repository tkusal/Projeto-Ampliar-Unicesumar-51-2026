/*
    Escreva um prorama que leia as 2 notas de 3 disciplinas de um aluno e armazene em uma matriz 3x2, onde cada linha representa
    uma disciplina.

    O programa deverá escrever na tela a médias das 3 disciplinas.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float notas[3][2], media = 0;
    char disciplina[15];

    for (int i = 0; i<3; i++)
    {
        switch (i)
        {
        case 0:
            strcpy(disciplina, "Português");
            break;
        case 1:
            strcpy(disciplina, "Matemática");
            break;
        case 2:
            strcpy(disciplina, "Ciências");
            break;
        default:
            break;
        }
        for (int j = 0; j<2; j++)
        {
            printf("Insira a nota %d de %s: ", j+1, disciplina);
            scanf("%f", &notas[i][j]);
        }

    }

    for (int i = 0; i < 3; i++)
    {
        media = (notas[i][0] + notas[i][1]) /2;

        switch (i)
        {
        case 0:
            printf("A média de Português é: %.1f\n", media);
            break;
        case 1:
            printf("A média de Matemática é: %.1f\n", media);
            break;
        case 2:
            printf("A média de Ciências é: %.1f\n", media);
            break;
        default:
            break;
        }
    }

    return 0;
}