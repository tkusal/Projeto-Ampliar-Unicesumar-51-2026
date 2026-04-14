#include <stdio.h> //STanDard Input Output . Header

int main() {
    int numero;

    numero = 10;

    int resultado = numero * 2;

    printf("Numero = %d", resultado);

    int numero2;
    printf("\nInforme um número: ");
    scanf( "%d", &numero2);

    resultado = numero + numero2;

    printf("%d + %d = %d", numero, numero2, resultado);

    return 0;
}