/*
    Escreva um algoritmo que leia 2 números inteiros. Calcule o produto (multiplicação) desses números e apresente o resultado.
*/

#include <stdio.h>

int main() {
    int num1, num2, produto;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    produto = num1 * num2;

    printf("%d x %d = %d", num1, num2, produto);

    return 0;
}