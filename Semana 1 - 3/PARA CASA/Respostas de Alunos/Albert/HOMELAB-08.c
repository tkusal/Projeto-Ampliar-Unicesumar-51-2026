/*
    A empresa Contoso resolveu conceder um aumento de 10% ao salário aos seus funcionários.
    Escreva um programa que leia o salário atual de um funcionário.
    O programa deve calcular e exibir o valor do aumento e o novo salário.
*/

#include <stdio.h>

int main() {

    float salario;
    printf("Qual salario atual do funcionario: ");
    scanf("%f", &salario);
    float aumento = salario * 0.1;

    float novo_salario = salario + aumento;
    printf("O funcionario teve um aumento de %.2f\n", aumento);
    printf("O valor do salario atual e %.2f", novo_salario);

    return 0;

}