/*
    Escreva um algoritmo que leia um número inteiro. O algoritmo deverá informar se este número é par ou ímpar
    e informar se é um número positivo ou negativo. Nesta atividade, conside o 0 (zero) como um número positivo e par.
*/

#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    // Verifica se é par ou ímpar
    if (num % 2 == 0) {
        printf("O numero eh PAR\n");
    } else {
        printf("O numero eh IMPAR\n");
    }

    // Verifica se é positivo ou negativo
    if (num >= 0) {
        printf("O numero eh POSITIVO\n");
    } else {
        printf("O numero eh NEGATIVO\n");
    }

    return 0;
}

//Professor, desenvolvi o algoritmo em linguagem C utilizando estruturas condicionais (if/else). O programa lê um número inteiro, verifica se ele é par ou ímpar por meio do operador módulo (%) e também identifica se é positivo ou negativo. O número zero foi considerado como par e positivo, conforme especificado no enunciado. Foram realizados testes para validar o funcionamento correto.