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

int main() {
    int codigo, quantidade;
    float total = 0;

    printf("Digite o codigo do item: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    switch(codigo) {
        case 1:
            total = quantidade * 4.00;
            break;
        case 2:
            total = quantidade * 4.50;
            break;
        case 3:
            total = quantidade * 5.00;
            break;
        case 4:
            total = quantidade * 2.00;
            break;
        case 5:
            total = quantidade * 1.50;
            break;
        default:
            printf("Codigo invalido!\n");
            return 1;
    }

    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}