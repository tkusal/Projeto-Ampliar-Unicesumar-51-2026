/*
    Um estagiário decidiu começar a investir sua bolsa e precisa de um programa para simular seus rendimentos.
    Nos juros compostos, o juro de cada mês é calculado sobre o montante acumulado do mês anterior (o famoso "juros sobre juros").
    Fórmula matemática de juros compostos: M = C (1+i)^t, onde M é o Valor final, C é o valor inicial, i é a taxa de juros
    e t é o tempo (^t lê-se "elevado à t").

    Escreva um programa que calculo o valor final para este estagiário.
*/

/* M = C ( 1+i )^t */

#include <stdio.h>
#include <math.h>

int main() {

    float m; /*VALOR FINAL*/
    float c; /* VALOR INICIAL*/
    float i; /* TAXA DE JUROS*/
    float t; /*TEMPO*/

    printf("Insira o valor incial do investimento: R$ ");
    scanf("%f", &c);

    printf("Insira a Taxa de juros mensal (em porcentagem, mas sem o sinal): ");
    scanf("%f", &i);
    
    printf("Insira quantos meses de investimento: ");
    scanf("%f", &t);

    i = i / 100;

    float calc;
    calc = 1+i;
    calc = pow(calc, t);
    m = c * calc;
    calc = m - c;
    calc = calc / t;

    printf("\n\nO Valor final do seu investimento sera de R$ %.2f\n", m);
    printf("Com uma media de ganhos mensal de R$ %.2f", calc);
    
    return 0;
}