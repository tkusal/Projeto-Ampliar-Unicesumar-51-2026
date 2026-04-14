/*
    Abaixo segue o código criado na Atv4.
    Refatore o código para atender a seguinte regra de negócio: Quando o cliente informar um código inválido,
    o programa deverá retornar ao menu solicitando que insira novamente a opção.
*/

#include <stdio.h>

int main() {
    int numero;

    do {
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
                printf("Código Inválido.\n\n");
        }
    } while (numero > 3 || numero < 1);

    printf("\nCompra finalizada.");

    return 0;
}