/*
    Leia 5 valores inteiros.
    Apresente então o maior valor lido e a posição (de 1 a 5) dentre os valores lidos em que ele foi encontrado.
*/
#include <stdio.h>

int main(){

    int numeros[5];
    printf("Digite 5 valores inteiros(1 por 1): ");
    
    int i;
    for (i = 0; i < 5; i++){
        scanf("%d", &numeros[i]);
    }
    int posicao = 1;
    int maior_valor = numeros[0];
    for (i = 1; i <=5; i++){
        if (numeros[i] > maior_valor)
        {
            maior_valor = numeros[i];
            posicao = i + 1;
        }
    } 

    printf("\n\nMaior valor = %d\nPosicao = %d", maior_valor, posicao);

    
    return 0;
}