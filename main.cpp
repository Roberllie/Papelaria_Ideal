#include <iostream>
#include <string>
#include "lib.h"
using namespace std;

typedef struct
{
    int id;
    string nome;
    float preco;
    int quantidade;
} Produto;

void geraDadosDeProdutos(Produto produtos[5])
{
    produtos[0] = {1, "Lapis", 1.5, 10};
    produtos[1] = {2, "Caneta", 2.00, 2};
    produtos[2] = {3, "Caderno", 8.00, 8};
    produtos[3] = {4, "Borracha", 0.50, 3};
    produtos[4] = {5, "Apontador", 1.20, 12};
}

void imprimeProdutos(Produto produtos[5])
{
    for (int i = 0; i < 5; i++) {
        cout << produtos[i].id << ". " << produtos[i].nome << ": Preco R$ "
             << produtos[i].preco << " Estoque: " << produtos[i].quantidade << endl;
    }
}


int main()
{
    int produtosId, produtosQtd;
    char continua;
    bool sair = false;
    Produto produtos[5];

    geraDadosDeProdutos(produtos);

    do
    {
        cout << "Bem-vindo(a) à Papelaria Ideal!\n"
             << "========== Estoque ==========\n";
        imprimeProdutos(produtos);

        cout << "Iniciando compra..." << endl
             << "Escolha o numero do item que deseja comprar: ";
        cin >> produtosId;
        cout << "Digite a quantidade que deseja comprar: ";
        cin >> produtosQtd;

        bool produtoEncontrado = false;

        for (int i = 0; i < 5; i++)
        {
            if (produtos[i].id == produtosId)
            {
                produtoEncontrado = true;

                if (produtosQtd <= produtos[i].quantidade)
                {
                    produtos[i].quantidade -= produtosQtd;
                    cout << "Item: " << produtos[i].nome
                         << " | Preco: R$ " << produtos[i].preco
                         << " | Quantidade comprada: " << produtosQtd << endl;
                }
                else
                {
                    cout << "Quantidade inválida!" << endl;
                }
                break;
            }
        }
        
        if (!produtoEncontrado)
        {
            cout << "Produto não encontrado!" << endl;
        }

        do
        {
            cout << "Deseja adicionar mais itens ao carrinho? (S/n): ";
            cin >> continua;
        }
        while (continua != 's' && continua != 'S' &&
               continua != 'n' && continua != 'N');
        cout << endl;

        if (continua == 'n' || continua == 'N')
        {
            cout << "========== Cupom Fiscal ==========" << endl;
            int valortotal = produtos[i].preco * produtosQtd;
                cout << valortotal;
                
        
            sair = true;
        }

    } while (!sair);

    cout << "Obrigado por comprar na Papelaria Ideal. Volte sempre!\n";


}


