/*
    Uma loja está com uma promoção de descontos progressivos baseados no valor total da compra:
    - Compras acima de R$ 500,00 recebem 20% de desconto.
    - Compras de R$ 200,00 e R$ 500,00 recebem 10% de desconto.
    - Compras abaixo de R$ 200,00 recebem apenas 5% de desconto.

    Escreva um programa que leia o valor da compra, calcule o desconto e mostre o valor final a pagar.
*/

#include <stdio.h>

int main()
{
    float valor_pagar, desconto, valor_final;

    printf("Valor da compra: ");
    scanf("%f", &valor_pagar);

    if (valor_pagar > 500.00)
    {
        desconto = valor_pagar * 0.2;
    }
    else if (valor_pagar >= 200.0)
    {
        desconto = valor_pagar * 0.1;
    }
    else
    {
        desconto = valor_pagar * 0.05;
    }

    valor_final = valor_pagar-desconto;

    printf("Total a pagar: %.2f", valor_final);

    return 0;
}