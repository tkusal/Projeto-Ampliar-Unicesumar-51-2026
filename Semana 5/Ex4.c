/*
    Escreva um programa em C que funcione como um sistema bancário.
    O programa consistirá no seguinte menu:

    1. Cadastrar Cliente
    2. Consultar Saldo
    3. Realizar Saque
    4. Realizar Depósito
    5. Consultar Extrato
    6. Sair

    - O programa só poderá ser encerrado quando o usuário clicar escolher a opção de sair.
    - O Cadastro do Cliente consiste em Nome, Idade, Endereço e C/C.
    - O Endereço consiste em Rua, Número e Bairro.
    - O sistema pode armazenar ATÉ 50 clientes.
    - O extrato de cada cliente pode armazenar ATÉ 50 transações, contendo o tipo de transação (saque ou depósito e o valor)
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

#define MAX_CLIENTES 50
#define MAX_EXTRATO 50
#define NUM_CONTA 100000

typedef struct {
    char rua[30], bairro[30];
    int numero;
} TipoEndereco;

typedef struct {
    int tipo; //1 = saque | 2 = deposito | 3 = Saldo inicial
    float valor, saldoAtual;
} TipoTransacao;

typedef struct {
    char nome[50];
    int idade, numConta, numExtrato;
    float saldo;
    TipoEndereco endereco;
    TipoTransacao extrato[MAX_EXTRATO];
} TipoCliente;

int main() {
    setlocale(LC_ALL, "Portuguese");
    int totalClientes = 0, opcao, buscaConta, indiceLocalizado = -1;
    TipoCliente cliente[MAX_CLIENTES];
    float valorSaque;

    do {
        printf("\nEscolhe uma das opções a seguir:\n"
                "1. Cadastrar Cliente\n"
                "2. Consultar Saldo\n"
                "3. Realizar Saque\n"
                "4. Realizar Depósito\n"
                "5. Consultar Extrato\n"
                "6. Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (totalClientes >= MAX_CLIENTES) {
                    printf("\nNão é possível cadastrar novo clientes.\n");
                } else {
                    cliente[totalClientes].numConta = NUM_CONTA + 1 + totalClientes;

                    getchar();
                    printf("Informe o nome do cliente:");
                    fgets(cliente[totalClientes].nome, sizeof(cliente[totalClientes].nome), stdin);
                    cliente[totalClientes].nome[ strcspn(cliente[totalClientes].nome, "\n") ] = '\0';

                    printf("Informe a idade: ");
                    scanf("%d", &cliente[totalClientes].idade);

                    getchar();
                    printf("Informe a logradpuro do endereço: ");
                    fgets(cliente[totalClientes].endereco.rua, sizeof(cliente[totalClientes].endereco.rua), stdin);
                    cliente[totalClientes].endereco.rua [ strcspn (cliente[totalClientes].endereco.rua,"\n") ] ='\0';

                    printf("Informe o número do endereço: ");
                    scanf("%d", &cliente[totalClientes].endereco.numero);

                    getchar();
                    printf("Informe o bairro do endereço: ");
                    fgets(cliente[totalClientes].endereco.bairro, sizeof(cliente[totalClientes].endereco.bairro), stdin);
                    cliente[totalClientes].endereco.bairro [ strcspn (cliente[totalClientes].endereco.bairro,"\n") ] ='\0';

                    printf("Informe o saldo inicial de %s: ", cliente[totalClientes].nome);
                    scanf("%f", &cliente[totalClientes].saldo);
                    printf("\nCliente Cadastrado com sucesso.\nConta número: %d\n", cliente[totalClientes].numConta);

                    cliente[totalClientes].extrato[0].tipo = 3;
                    cliente[totalClientes].extrato[0].valor = cliente[totalClientes].saldo;
                    cliente[totalClientes].extrato[0].saldoAtual = cliente[totalClientes].saldo;
                    cliente[totalClientes].numExtrato = 1;
                    totalClientes++;

                }
                break;
            case 2:
                printf("Informe o número da conta bancária que deseja consultar o saldo: ");
                scanf("%d", &buscaConta);

                for (int i = 0; i < totalClientes; i++) {
                    if (buscaConta == cliente[i].numConta) {
                        indiceLocalizado = i;
                        break;
                    }
                }

                if (indiceLocalizado == -1) {
                    printf("\nConta não localizada.\n");
                    break;
                }

                printf("\nSaldo de %s: R$%.2f\n", cliente[indiceLocalizado].nome, cliente[indiceLocalizado].saldo);
                indiceLocalizado = -1;
                break;
            case 3:
                printf("Informe o número da conta bancária que deseja sacar: ");
                scanf("%d", &buscaConta);

                for (int i = 0; i < totalClientes; i++) {
                    if (buscaConta == cliente[i].numConta) {
                        indiceLocalizado = i;
                        break;
                    }
                }

                if (indiceLocalizado == -1) {
                    printf("\nConta não localizada.\n");
                    break;
                }

                printf("Qual valor gostaria de sacar?");
                scanf("%f", &valorSaque);

                if (valorSaque > cliente[indiceLocalizado].saldo) {
                    printf("\nSaldo insuficiente.\n");
                    break;
                }

                cliente[indiceLocalizado].saldo -= valorSaque;
                printf("\nSaque Realizado. Saldo atual: R$%.2f \n", cliente[indiceLocalizado].saldo);

                cliente[indiceLocalizado].extrato[cliente[indiceLocalizado].numExtrato].tipo = 1;
                cliente[indiceLocalizado].extrato[cliente[indiceLocalizado].numExtrato].valor = valorSaque;
                cliente[indiceLocalizado].extrato[cliente[indiceLocalizado].numExtrato].saldoAtual = cliente[indiceLocalizado].saldo;
                cliente[indiceLocalizado].numExtrato++;
                indiceLocalizado = -1;
                break;
            case 4:
                printf("Informe o número da conta bancária em que deseja depositar: ");
                scanf("%d", &buscaConta);

                for (int i = 0; i < totalClientes; i++) {
                    if (buscaConta == cliente[i].numConta) {
                        indiceLocalizado = i;
                        break;
                    }
                }

                if (indiceLocalizado == -1) {
                    printf("\nConta não localizada.\n");
                    break;
                }

                printf("Qual valor gostaria de depositar?");
                scanf("%f", &valorSaque);

                cliente[indiceLocalizado].saldo += valorSaque;
                printf("\nDeposito Realizado. Saldo atual: R$%.2f\n", cliente[indiceLocalizado].saldo);

                cliente[indiceLocalizado].extrato[cliente[indiceLocalizado].numExtrato].tipo = 2;
                cliente[indiceLocalizado].extrato[cliente[indiceLocalizado].numExtrato].valor = valorSaque;
                cliente[indiceLocalizado].extrato[cliente[indiceLocalizado].numExtrato].saldoAtual = cliente[indiceLocalizado].saldo;
                cliente[indiceLocalizado].numExtrato++;
                indiceLocalizado = -1;
                break;
            case 5:
                printf("Informe o número da conta bancária que deseja o extrato: ");
                scanf("%d", &buscaConta);

                for (int i = 0; i < totalClientes; i++) {
                    if (buscaConta == cliente[i].numConta) {
                        indiceLocalizado = i;
                        break;
                    }
                }

                if (indiceLocalizado == -1) {
                    printf("\nConta não localizada.\n");
                    break;
                }

                printf("<-- Extrato de %s | Conta n %d -->\n-----------\n", cliente[indiceLocalizado].nome, cliente[indiceLocalizado].numConta);
                for (int i = 0; i < cliente[indiceLocalizado].numExtrato; i++){
                    printf("Movimentação %d\n", i+1);
                    if (cliente[indiceLocalizado].extrato[i].tipo == 1) {
                        printf("Tipo: Saque\n");
                    } else if (cliente[indiceLocalizado].extrato[i].tipo == 2) {
                        printf("Tipo: Depósito\n");
                    } else {
                        printf("Tipo: Saldo Inicial\n");
                    }
                    printf("Valor: R$%.2f\n", cliente[indiceLocalizado].extrato[i].valor);
                    printf("Saldo: R$%.2f\n", cliente[indiceLocalizado].extrato[i].saldoAtual);
                    printf("-----------\n");
                }
                indiceLocalizado = -1;
                break;
            case 6:
                printf("Encerrando sistema.\n");
                return 0;
            default:
                printf("\nOpção Inválida.\n");
                break;
        }

    } while (1);
}