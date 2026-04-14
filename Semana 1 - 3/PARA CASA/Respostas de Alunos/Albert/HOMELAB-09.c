/*
    Uma loja está com uma promoção de descontos progressivos baseados no valor total da compra:
    - Compras acima de R$ 500,00 recebem 20% de desconto.
    - Compras de R$ 200,00 e R$ 500,00 recebem 10% de desconto.
    - Compras abaixo de R$ 200,00 recebem apenas 5% de desconto.

    Escreva um programa que leia o valor da compra, calcule o desconto e mostre o valor final a pagar.
*/


#include <stdio.h>>

int main(){

    float valor;
    printf("Ola, insira o valor total da compra para calcular o desconto:\n");
    scanf("%f", &valor);

    float valor_final;
    float desconto;

    if(valor < 200){
        desconto = valor * 0.05;
        valor_final = valor - desconto;
    }

    else if (200 < valor && valor < 500 ){
        desconto = valor * 0.10;
        valor_final = valor - desconto;
    }
    else {
        desconto = valor * 0.20;
        valor_final = valor - desconto;
    }

    printf("\n");
    printf("O Valor final da sua compra é de R$%.2f", valor_final);

    return 0;
}