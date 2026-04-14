/*
    Leia um valor inteiro N, tal que 1 < N < 1000.
    A seguir, mostre a tabuada multiplicação de 1 a 10 deste número.

    Exemplo:
    1 x N = N
    2 x N = 2N
    ....até 10 x N = 10N.
*/

#include <stdio.h>

int main(){
    int numero;
    while(1)
    {
        printf("Qual numero deseja ver a tabuada?");
        scanf("%d", &numero);
        
        if (numero >= 1 && numero <= 1000){
            int i;
            for (i = 1; i <= 10; i = i + 1) {
                printf("%d * %d = %d\n", numero, i, numero * i );
            }
            break;
        }
        else {
            printf("Por favor, insira um numero entre 1 e 1000\n");
        }
    }   

    return 0;
}