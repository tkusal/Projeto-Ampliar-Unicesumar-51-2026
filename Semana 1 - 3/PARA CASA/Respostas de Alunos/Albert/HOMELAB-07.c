/*
    Leia dois valores inteiros X e Y.
    A seguir, calcule e mostre a soma dos números ímpares entre eles (não incluindo os próprios X e Y, se forem ímpares).

    Exemplo:
    X = 5
    Y = 15
    Soma = 7 + 9 + 11 + 13
    Saída = 40
*/

#include <stdio.h>

int main(){
    int num1, num2;
    printf("Digite o valor de x: ");
    scanf("%d", &num1);
    printf("Digite o valor de y: ");
    scanf("%d", &num2);
    num1++;
    num2--;

    if (num1 % 2 == 0){
        num1++;
    }
    if (num2 % 2 == 0) {
        num2--;
    }

    int soma = 0;
    int i;
    printf("Soma = ");
    for (i = num1; i <= num2; i++){
        if (i % 2 != 0){
            printf("%d ", i);
            soma = soma + i;
            if (i < num2){
                printf("+ ");
            }
        }
    }
    printf("\n");
    printf("Saida = %d", soma);
    return 0;
}