/*
    Na matemática, um Número Primo é aquele que pode ser dividido somente por 1 (um) e por ele mesmo.
    Por exemplo, o número 7 é primo, pois pode ser dividido apenas pelo número 1 e pelo número 7.
    Escreva um programa que leia um número e diga se ele é primo ou não.
*/

#include <stdio.h>

int main(){

    int num;
    printf("Insira um numero: ");
    scanf("%d", &num);

    int i;
    int div;

    /*if (num >= 0 && num >= 3){

    }*/
    for(i = 2;i <= num; i++){
        if (num % i == 0){
            div = i;
            break;
        }
    }

    printf("\n %d\n", div);
    if (div == num){
        printf("O numero %d e primo", num);
    }
    else {
        printf("O numero %d nao e primo", num);
    }

    return 0;
}