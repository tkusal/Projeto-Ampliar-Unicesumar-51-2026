/*
    Escreva um programa que permita:
    1. Cadastrar Produtos
    2. Vender Produtos
    3. Sair

    Cada produto possui:
    - Código
    - Nome
    - Preço
    - Quantidade

    - O programa só pode ser encerrado quando o usuário escolher a opção 3.
    - Ao vender um produto, o usuário deverá informar a quantidade que será vendida e o programa deverá validar se essa
      quantidade existe em estoque e calcular o preço a ser pago.
    - O programa deve permitir o cadastro de ATÉ 5 produtos.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct
{
    int codigo;
    char nome[30];
    float preco;
    int quantidade;
} Cadastro;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Cadastro produto[5];
    int opcao, qtdProdutos = 0;

    do
    {
        printf("======MENU=====\n");
        printf("1. Cadastre o produto\n");
        printf("2. Venda do produto\n");
        printf("3. Sair\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            if (qtdProdutos < 5)
            {
                printf("Digite o codigo do produto: \n");
                scanf("%d", &produto[qtdProdutos].codigo);
                getchar();
                printf("Digite o nome do produto:\n");
                fgets(produto[qtdProdutos].nome, sizeof (produto[qtdProdutos].nome), stdin);
                produto[qtdProdutos].nome [strcspn (produto[qtdProdutos].nome, "\n") ] ='\0';
                printf ("Digite o preço: \n");
                scanf("%f", &produto[qtdProdutos].preco);
                printf("Digite a quantidade: \n");
                scanf("%d", &produto[qtdProdutos].quantidade);
                getchar();
                qtdProdutos++;
            }
            else
            {
                printf("Não é possível cadastrar novos produtos.\n");
            }
            break;
        case 2:
            int codVenda, qtdVenda, indiceProduto = -1;

            printf("\nLista de Produtos:\nCódigo | Produto\n");
            for (int i = 0; i < qtdProdutos; i++) {
                printf("%d | %s\n", produto[i].codigo, produto[i].nome);
            }

            printf("Informe o código do produto que está vendendo: ");
            scanf("%d", &codVenda);
            getchar();

            for (int i = 0; i < qtdProdutos; i++) {
                if (codVenda == produto[i].codigo) {
                    indiceProduto = i;
                    break;
                }
            }

            if (indiceProduto == -1) {
                printf("Código não encontrado.\n");
                break;
            }

            printf("Atualmente possui em estoque %d de %s\n", produto[indiceProduto].quantidade, produto[indiceProduto].nome);
            printf("Quantos produtos deseja vender?");
            scanf("%d", &qtdVenda);
            getchar();

            if (qtdVenda <= produto[indiceProduto].quantidade) {
                float saldo = qtdVenda * produto[indiceProduto].preco;
                printf("O total da venda é: %.2f\n", saldo);

                produto[indiceProduto].quantidade = produto[indiceProduto].quantidade - qtdVenda;
            } else {
                printf("Quantidade não disponível em estoque.\n");
            }

            break;
        case 3:
            printf("Encerrando Sistema.");
            return 0;
        default:
            printf("Opção inválida. Escolha uma das opções abaixo.\n\n");
            break;
        }
    } while (1);
}