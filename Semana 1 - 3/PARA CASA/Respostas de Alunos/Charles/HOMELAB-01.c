/*
    Escreva um algoritmo que leia 2 números inteiros. Calcule o produto (multiplicação) desses números e apresente o resultado.
*/

#include <stdio.h>

int main() {
    int num1, num2, produto;

    // Entrada de dados
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    // Processamento
    produto = num1 * num2;

    // Saída
    printf("O produto dos numeros e: %d\n", produto);

    return 0;
}
/* Professor, desenvolvi o algoritmo em linguagem C utilizando entrada de dados com scanf e saída com printf.
O programa lê dois números inteiros, realiza a multiplicação entre eles e apresenta o resultado ao usuário.
Foram realizados testes com diferentes valores para validar o funcionamento correto do código.*/