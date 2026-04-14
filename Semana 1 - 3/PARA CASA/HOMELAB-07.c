/*
    Leia dois valores inteiros X e Y.
    A seguir, calcule e mostre a soma dos números ímpares entre eles (não incluindo os próprios X e Y, se forem ímpares).

    Exemplo:
    X = 5
    Y = 15
    Soma = 7 + 9 + 11 + 13
    Saída = 40
*/

#include <stdio.h>

int main() {
    int x, y, soma = 0;

    do {
        printf("Informe o primeiro número inteiro: ");
        scanf("%d" , &x);
        printf("Informe o segundo número inteiro: ");
        scanf("%d" , &y);

        if (x == y) {
            printf("Valores iguais.Escolha número diferentes.\n");
        }

    }while (x == y);

    if (x > y) {
        int temp = y;
        y = x;
        x = temp;
    }

    for(int i = x+1 ; i<y ; i++) {
        if (i % 2 != 0) {
            //soma += i;
            soma = soma + i;
        }
    }

    printf("Soma = %d", soma);

    return 0;
}