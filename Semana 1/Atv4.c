/*
    Escreva um algoritmo que simule uma máquina de vendas de lata de refrigerante.
    Se o cliente digitar 1, a máquina deverá soltar uma Coca-Cola.
    Se o cliente digitar 2, a máquina deverá soltar um Guaraná.
    Se o cliente digitar 3, a máquina deverá soltar uma Fanta.
    E se o cliente digitar um valor diferente dos anteriores, a máquina deverá informar "Código Inválido".
*/

#include <stdio.h>

int main() {
    int numero;

    printf("Opções: \n");
    printf("[1] Coca-Cola\n");
    printf("[2] Guaraná\n");
    printf("[3] Fanta\n");
    printf("Informe o código do refrigerante que deseja: ");
    scanf("%d", &numero);

    switch (numero) {
        case 1:
            printf("Coca-Cola.");
            break;
        case 2:
            printf("Guaraná.");
            break;
        case 3:
            printf("Fanta.");
            break;
        default:
            printf("Código Inválido.");
    }

    return 0;
}