/*
    Uma loja está com uma promoção de descontos progressivos baseados no valor total da compra:
    - Compras acima de R$ 500,00 recebem 20% de desconto.
    - Compras de R$ 200,00 e R$ 500,00 recebem 10% de desconto.
    - Compras abaixo de R$ 200,00 recebem apenas 5% de desconto.

    Escreva um programa que leia o valor da compra, calcule o desconto e mostre o valor final a pagar.
*/
#include <stdio.h>

int main() {
    float valorCompra, desconto, valorFinal;

    printf("Digite o valor da compra: ");
    scanf("%f", &valorCompra);

    // Definir desconto
    if (valorCompra > 500) {
        desconto = valorCompra * 0.20;
    } 
    else if (valorCompra >= 200) {
        desconto = valorCompra * 0.10;
    } 
    else {
        desconto = valorCompra * 0.05;
    }

    valorFinal = valorCompra - desconto;

    printf("Desconto: R$ %.2f\n", desconto);
    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}
//Professor, desenvolvi o algoritmo em linguagem C utilizando estruturas condicionais (if/else if) para aplicar descontos progressivos com base no valor da compra. O programa calcula o valor do desconto de acordo com as faixas definidas e apresenta o valor final a pagar. Foram realizados testes para validar o funcionamento correto.