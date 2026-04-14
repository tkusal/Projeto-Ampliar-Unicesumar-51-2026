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
    int voto;
    int alfa = 0, beta = 0, omega = 0, branco = 0, nulo = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Eleitor %d - Digite seu voto: ", i);
        scanf("%d", &voto);

        if (voto == 1) {
            alfa++;
        } else if (voto == 2) {
            beta++;
        } else if (voto == 3) {
            omega++;
        } else if (voto == 4) {
            branco++;
        } else if (voto == 5) {
            nulo++;
        } else {
            printf("Voto Invalido\n");
            i--;
        }
    }

    printf("\nResultado:\n");
    printf("Chapa Alfa: %d\n", alfa);
    printf("Chapa Beta: %d\n", beta);
    printf("Chapa Omega: %d\n", omega);
    printf("Brancos: %d\n", branco);
    printf("Nulos: %d\n", nulo);

    if (alfa > beta && alfa > omega) {
        printf("Vencedor: Chapa Alfa\n");
    } else if (beta > alfa && beta > omega) {
        printf("Vencedor: Chapa Beta\n");
    } else {
        printf("Vencedor: Chapa Omega\n");
    }

    return 0;
}