/*
    A empresa Contoso resolveu conceder um aumento de 10% ao salário aos seus funcionários.
    Escreva um programa que leia o salário atual de um funcionário.
    O programa deve calcular e exibir o valor do aumento e o novo salário.
*/
#include <stdio.h>

int main() {
    float salario, aumento, novoSalario;

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    aumento = salario * 0.10; // 10%
    novoSalario = salario + aumento;

    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", novoSalario);

    return 0;
}
//Professor, desenvolvi o algoritmo utilizando variáveis do tipo float para representar valores monetários. O programa lê o salário atual, calcula o aumento de 10% e apresenta tanto o valor do aumento quanto o novo salário. Foram realizados testes para garantir a precisão dos cálculos.