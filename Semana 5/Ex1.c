/*
    Escreva um programa que receba o cadastro de 3 funcionários.
    Cada funcionário tem nome, idade e salário.
    Informe qual funcionário possui o maior salário.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct {
    char nome[30];
    int idade;
    float salario;
} Cadastro;

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    Cadastro funcionarios[3];
    float maiorSalario;
    int indice_maior_salario = 0;

    for(int i = 0; i<3; i++) {
        printf("Informe o nome do funcionário %d :", i+1);
        fgets(funcionarios[i].nome, sizeof(funcionarios[i].nome), stdin);
        funcionarios[i].nome[ strcspn(funcionarios[i].nome, "\n") ] = '\0';

        printf("Informe a idade: ");
        scanf("%d", &funcionarios[i].idade);

        printf("Informe o salário: ");
        scanf("%f", &funcionarios[i].salario);
        getchar();

        if (i == 0) {
            maiorSalario = funcionarios[i].salario;
        }

        if (maiorSalario < funcionarios[i].salario) {
            maiorSalario = funcionarios[i].salario;
            indice_maior_salario = i;
        }
    }

    printf("O maior salário é de %s, %d anos, salário de R$%.2f.", funcionarios[indice_maior_salario].nome, funcionarios[indice_maior_salario].idade, funcionarios[indice_maior_salario].salario);

    return 0;
}