#include <stdio.h>

int main() {
    int numero1, numero2;
    int resultado;

    printf("Informe o primeiro numero: ");
    scanf( "%d", &numero1);
    printf("Informe o segundo numero: ");
    scanf( "%d", &numero2);

    resultado = numero1 * numero2;

    printf("%d * %d = %d", numero1, numero2, resultado);

    return 0;

}