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

int main()
{

    int codigo;
    int quantidade;
    float valor;

    printf("TABELA DE PREÇOS\n\n");
    printf("1 - Cachorro Quente R$ 4.00\n");
    printf("2 - X-Salada R$ 4.50\n");
    printf("3 - X-Bacon R$ 5.00\n");
    printf("4 - Torrada Simples R$ 2.00\n");
    printf("5 - Refrigerante R$ 1.50\n");
    printf("\n\n Qual codigo do item que deseja: ");
    scanf("%d", &codigo);
    printf("\n Qual a quantidade: ");
    scanf("%d", &quantidade);

    switch (codigo) 
    {
        case 1:
            valor = quantidade * 4.00;
            printf("\n PRODUTO: Cachorro quente\n");
            printf("QUANTIDADE: %d\n", quantidade);
            printf("VALOR UNT: R$4.00 | VALOR TOTAL: R$ %.2f\n", valor);
            break;
        case 2:
            valor = quantidade * 4.50;
            printf("\n PRODUTO: X-Salada\n");
            printf("QUANTIDADE: %d\n", quantidade);
            printf("VALOR UNT: R$4.50 | VALOR TOTAL: R$ %.2f\n", valor);
            break;
        case 3:
            valor = quantidade * 5.00;
            printf("\n PRODUTO: X-Bacon\n");
            printf("QUANTIDADE: %d\n", quantidade);
            printf("VALOR UNT: R$5.00 | VALOR TOTAL: R$ %.2f\n", valor);
            break;
        case 4:
            valor = quantidade * 2.00;
            printf("\n PRODUTO: Torrada Simples\n");
            printf("QUANTIDADE: %d\n", quantidade);
            printf("VALOR UNT: R$2.00 | VALOR TOTAL: R$ %.2f\n", valor);
            break;
        case 5:
            valor = quantidade * 1.50;
            printf("\n PRODUTO: Refrigerante\n");
            printf("QUANTIDADE: %d\n", quantidade);
            printf("VALOR UNT: R$1,50 | VALOR TOTAL: R$ %.2f\n", valor);
            break;
    }

    return 0;
}


