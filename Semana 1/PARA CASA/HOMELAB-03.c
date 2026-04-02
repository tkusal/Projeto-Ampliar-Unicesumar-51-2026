/*
    Com base em uma tabela de preços a seguir:
    1- Cachorro Quente R$ 4.00
    2- X-Salada R$ 4.50
    3- X-Bacon R$ 5.00
    4- Torrada Simples R$ 2.00
    5- Refrigerante R$ 1.50

    Escreva um programa que leia o código de um item e a quantidade deste item.
    A seguir, calcule e mostre o valor da conta a pagar
*/

#include <stdio.h>

#define HOTDOG 4.00
#define XSALADA 4.50
#define XBACON 5.00
#define TORRADA 2.00
#define REFRIGERANTE 1.50

int main() {
    int codigo, qtd;
    float valor;

    printf("Escolha um produto pelo código:\n");
    printf("[1] Cachorro Quente (R$ 4.00)\n[2] X-Salada (R$ 4.50)\n[3] X-Bacon (R$ 5.00)\n[4] Torrada Simples (R$ 2.00)[5] Refrigerante (R$ 1.50)\nCódigo: ");
    scanf("%d", &codigo);

    switch(codigo) {
        case 1:
            valor = HOTDOG;
            break;
        case 2:
            valor = XSALADA;
            break;
        case 3:
            valor = XBACON;
            break;
        case 4:
            valor = TORRADA;
            break;
        case 5:
            valor = REFRIGERANTE;
            break;
        default:
            printf("Código Inválido.\n");
    }

    printf("Qual quantidade deseja? ");
    scanf("%d", &qtd);

    printf("Total a pagar = R$%.2f", valor * qtd);

    return 0;
}