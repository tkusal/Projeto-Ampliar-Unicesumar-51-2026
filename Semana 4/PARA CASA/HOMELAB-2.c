/*
    Escreva um algoritmo em C que leia o nome de uma pessoa.
    O programa deverá escrever na tela "Bem Vindo [nome da pessoa]".
*/

#include <stdio.h>
//#include <string.h>

int main() {
    char nome[51];

    printf("Informe seu nome: ");
    //fgets(nome, sizeof(nome), stdin);
    //nome[ strcspn(nome, "\n") ] = '\0';
    scanf("%50[^\n]s", nome);

    printf("Bem vindo, %s! Como você está?", nome);

    return 0;
}