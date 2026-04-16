/*
    Escreva um algortimo em C que receba:

    Matrícula do Aluno:
    Idade do Aluno:
    Nome do Aluno:
    Endereço do Aluno:

    O programa deverá escrever na tela a ficha completa do aluno, incluindo nome, idade, matricula e endereço.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matricula, idade;
    char nome[31], endereco[31];

    printf("Informe a matricula: ");
    scanf("%d", &matricula);

    printf("Informe a idade: ");
    scanf("%d", &idade);
    getchar();

    printf("Informe o nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[ strcspn(nome, "\n") ] = '\0';

    printf("Informe o endereço: ");
    fgets(endereco, sizeof(endereco), stdin);
    endereco[ strcspn(endereco, "\n") ] = '\0';

    printf(" O aluno %s, matricula %d, tem %d anos e mora no endereço %s", nome, matricula, idade, endereco);

    return 0;
}