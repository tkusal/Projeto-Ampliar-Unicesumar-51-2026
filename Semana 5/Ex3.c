/*
    Refatore o código do Ex2 incluindo histórico de vendas (Até 100 vendas). E incluindo o valor total vendido.
    Isso devem ser 2 novas opções apresentadas ao usuário através do menu.
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
} CadastroProduto;

typedef struct
{
    int codigoProduto;
    char nomeProduto[30];
    float valorVenda;
    int quantidadeVendido;
} CadastroVendas;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    CadastroProduto produto[5];
    CadastroVendas historicoVendas[100];
    int opcao, qtdProdutos = 0, qtdHistorico = 0;

    do
    {
        printf("======MENU=====\n");
        printf("1. Cadastre o produto\n");
        printf("2. Venda do produto\n");
        printf("3. Histórico de Vendas\n");
        printf("4. Total Vendido\n");
        printf("5. Sair\n");
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
                historicoVendas[qtdHistorico].valorVenda = qtdVenda * produto[indiceProduto].preco;
                historicoVendas[qtdHistorico].quantidadeVendido = qtdVenda;
                strcpy (historicoVendas[qtdHistorico].nomeProduto, produto[indiceProduto].nome);
                historicoVendas[qtdHistorico].codigoProduto = produto[indiceProduto].codigo;

                printf("O total da venda é: R$%.2f\n", historicoVendas[qtdHistorico].valorVenda);
                produto[indiceProduto].quantidade = produto[indiceProduto].quantidade - qtdVenda;
                qtdHistorico++;
            } else {
                printf("Quantidade não disponível em estoque.\n");
            }

            break;
        case 3:
            for (int i = 0; i < qtdHistorico; i++) {
                printf("Venda %d:\n"
                    "Código do Produto: %d\n"
                    "Nome do Produto: %s\n"
                    "Quantidade vendida: %d\n"
                    "Valor da Venda: R$%.2f\n"
                    "--------------------\n", i+1, historicoVendas[i].codigoProduto, historicoVendas[i].nomeProduto, historicoVendas[i].quantidadeVendido, historicoVendas[i].valorVenda);
            }
            printf("\n");
            break;
        case 4:
            float totalVendido = 0;
            for (int i = 0; i < qtdHistorico; i++) {
                totalVendido = totalVendido + historicoVendas[i].valorVenda;
            }

            printf("Total vendido: R$%.2f\n\n", totalVendido);

            break;
        case 5:
            printf("Encerrando Sistema.");
            return 0;
        default:
            printf("Opção inválida. Escolha uma das opções abaixo.\n\n");
            break;
        }
    } while (1);
}