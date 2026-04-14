/*
    Um estagiário decidiu começar a investir sua bolsa e precisa de um programa para simular seus rendimentos.
    Nos juros compostos, o juro de cada mês é calculado sobre o montante acumulado do mês anterior (o famoso "juros sobre juros").
    Fórmula matemática de juros compostos: M = C (1+i)^t, onde M é o Valor final, C é o valor inicial, i é a taxa de juros
    e t é o tempo (^t lê-se "elevado à t").

    Escreva um programa que calculo o valor final para este estagiário.
*/

#include <stdio.h>

int main() {
    float C, i, M;
    int t;

    printf("Digite o capital inicial: ");
    scanf("%f", &C);

    printf("Digite a taxa de juros (ex: 0.05 para 5%%): ");
    scanf("%f", &i);

    printf("Digite o tempo (em meses): ");
    scanf("%d", &t);

    M = C;

    for (int j = 1; j <= t; j++) {
        M = M * (1 + i);
    }

    printf("Valor final: %.2f\n", M);

    return 0;
}