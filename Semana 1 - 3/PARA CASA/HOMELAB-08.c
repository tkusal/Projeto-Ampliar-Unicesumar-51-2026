/*
    A empresa Contoso resolveu conceder um aumento de 10% no salário de seus funcionários.
    Escreva um programa que leia o salário atual de um funcionário.
    O programa deve calcular e exibir o valor do aumento e o novo salário.
*/

#include <stdio.h>

int main() {
    float salario_atual, valor_aumento, novo_salario;

    printf("Informe o salário: ");
    scanf("%f", &salario_atual);

    valor_aumento = salario_atual * 0.1;
    novo_salario = salario_atual + valor_aumento;

    printf("Valor do Aumento: %.2f\nNovo Salário: %.2f", valor_aumento, novo_salario);

    return 0;
}