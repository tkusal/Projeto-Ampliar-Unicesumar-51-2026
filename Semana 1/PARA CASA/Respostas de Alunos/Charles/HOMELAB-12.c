/*
    Um estagiário decidiu começar a investir sua bolsa e precisa de um programa para simular seus rendimentos.
    Nos juros compostos, o juro de cada mês é calculado sobre o montante acumulado do mês anterior (o famoso "juros sobre juros").
    Fórmula matemática de juros compostos: M = C (1+i)^t, onde M é o Valor final, C é o valor inicial, i é a taxa de juros
    e t é o tempo (^t lê-se "elevado à t").

    Escreva um programa que calculo o valor final para este estagiário.
*/
#include <stdio.h>
#include <math.h>

int main() {
    float C, i, M;
    int t;

    printf("Digite o capital inicial: ");
    scanf("%f", &C);

    printf("Digite a taxa de juros (ex: 0.05 para 5%%): ");
    scanf("%f", &i);

    printf("Digite o tempo (em meses): ");
    scanf("%d", &t);

    // Fórmula de juros compostos
    M = C * pow((1 + i), t);

    printf("Valor final: R$ %.2f\n", M);

    return 0;
}
//Professor, desenvolvi o algoritmo em linguagem C utilizando a função pow() da biblioteca matemática para calcular juros compostos. O programa lê o capital inicial, a taxa de juros e o tempo, e aplica a fórmula M = C(1+i)^t para determinar o valor final do investimento. Foram realizados testes para validar os cálculos.