/*
    O grêmio estudantil de uma escola está realizando uma eleição e precisa de um sistema para contabilizar os votos.
    Existem três candidatos concorrendo. Escreva um programa que simule o funcionamento de uma urna eletrônica.

    Há um total de 10 alunos eleitores. O programa deve ler os votos dos alunos continuamente até que todos tenham respondido.
    As opções de voto são:
    1 - Voto para a Chapa Alfa
    2 - Voto para a Chapa Beta
    3 - Voto para a Chapa Ômega
    4 - Voto em Branco
    5 - Voto Nulo

    Se o usuário digitar qualquer número diferente de 0 a 5, o programa deve exibir a mensagem "Voto Invalido"
    e exigir que o aluno escolha um número válido. Quando a votação for encerrada, o programa deve exibir o relatório completo de
    quantos votos cada chapa teve e determinar qual chapa foi a vencedora (a que teve mais votos).

    Para simplificar e não haver necessidade de tratar um empate, vamos considerar um mundo perfeito onde não existem empates.
*/

#include <stdio.h>

int main() {

    int alfa = 0;
    int beta = 0;
    int omega = 0;
    int branco = 0;
    int nulo = 0;
    int opcao;
    int i;
    for (i = 1; i <= 10; i++){
        
        do {
            printf("[1] Voto para a Chapa Alfa\n");
            printf("[2] Voto para a Chapa Beta\n");
            printf("[3] Voto para a Chapa Ômega\n");
            printf("[4] Voto em Branco\n");
            printf("[5] Voto Nulo\n");
            scanf("%d", &opcao);

            switch (opcao) {
                case 1:
                    printf("Voto para chapa Alfa Registrado\n\n");
                    alfa++;
                    break;

                case 2:
                    printf("Voto para chapa Beta Registrado\n\n");
                    beta++;
                    break;

                case 3:
                    printf("Voto para chapa Omega Registrado\n\n");
                    omega++;
                    break;

                case 4:
                    printf("Voto em Branco registrado\n\n");
                    branco++;
                    break;

                case 5:
                    printf("Voto em Nulo Registrado\n\n");
                    nulo++;
                    break;

                default:
                    printf("Voto invalido\n\n");
            }

        } while (opcao > 5 || opcao < 1);
    } 
    
    if ( alfa > beta && alfa > omega){
        printf("A vencedora foi a chapa Alfa!");
    }

    else if ( beta > alfa && beta > omega){
        printf("A vencedora foi a chapa Beta!");
    }

    else if ( omega > alfa && omega > beta){
        printf("A vencedora foi a chapa Omega!");
    }
    printf("\n");
    printf("Votos Alfa: %d\n", alfa);
    printf("Votos Beta: %d\n", beta);
    printf("Votos Omega: %d\n", omega);
    printf("Votos Branco: %d\n", branco);
    printf("Votos Nulo: %d\n", nulo);

    return 0;
}