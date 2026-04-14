/*
    Leia 5 valores inteiros.
    Apresente então o maior valor lido e a posição (de 1 a 5) dentre os valores lidos em que ele foi encontrado.
*/

#include <stdio.h>

int main() {
    int valor, maior_valor, posicao;

    for (int i = 1; i <= 5; i++) {
        printf("informe o valor: ");
        scanf("%d", &valor);

        if (i == 1) {
            maior_valor = valor;
            posicao = i;
        }

        if (valor > maior_valor) {
            maior_valor = valor;
            posicao = i;
        }
    }

    printf("O maior valor é %d e ele foi o %dº lido.", maior_valor, posicao);

    return 0;
}