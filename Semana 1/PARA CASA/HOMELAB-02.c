/*
    Escreva um algoritmo que leia um número inteiro. O algoritmo deverá informar se este número é par ou ímpar
    e informar se é um número positivo ou negativo. Nesta atividade, conside o 0 (zero) como um número positivo e par.
*/

#include <stdio.h>

int main() {
    int numero;

    printf("Informe um número inteiro: ");
    scanf("%d", &numero);

    printf("O número é ");

    if (numero >= 0) {
        printf("POSITIVO");
    } else {
        printf("NEGATIVO");
    }

    printf (" e é ");

    if (numero % 2 == 0) {
        printf("PAR");
    } else {
        printf("ÍMPAR");
    }
    return 0;
}