/*
Escreva um programa em C que receba o salário de 2 devs e calcule a média.
MEDIA = (SALARIO 1 + SALARIO 2) / 2
*/

#include <stdio.h>

int main() {
    //float salario1, salario2, media;
    float salario1;
    float salario2;
    float media;

    printf("Informe o salário 1: ");
    scanf( "%f" , &salario1 );
    printf("Informe o salário 2: ");
    scanf( "%f" , &salario2 );

    media = (salario1 + salario2) /2;

    printf("A média é R$%.2f", media);

    return 0;
}