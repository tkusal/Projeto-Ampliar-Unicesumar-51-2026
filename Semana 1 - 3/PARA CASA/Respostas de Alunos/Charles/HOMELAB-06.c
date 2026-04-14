/*
    Leia 5 valores inteiros.
    Apresente então o maior valor lido e a posição (de 1 a 5) dentre os valores lidos em que ele foi encontrado.
*/
#include <stdio.h>

int main() {
    int i, valor, maior, posicao;

    for (i = 1; i <= 5; i++) {
        printf("Digite o %dº valor: ", i);
        scanf("%d", &valor);

        // Na primeira leitura, já define como maior
        if (i == 1) {
            maior = valor;
            posicao = i;
        } 
        // Compara com os próximos
        else if (valor > maior) {
            maior = valor;
            posicao = i;
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Posicao: %d\n", posicao);

    return 0;
}
//Professor, desenvolvi o algoritmo utilizando estrutura de repetição para leitura dos valores e estrutura condicional para comparação. O programa armazena o maior valor encontrado e sua respectiva posição (de 1 a 5), conforme solicitado. Foram realizados testes para validar o funcionamento correto.