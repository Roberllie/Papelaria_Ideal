#include "lib.h" // biblioteca auxiliar para entrada/saída de dados lidos do usuário
#include <iostream>
using namespace std;

const int MAX_CHARS = 81;

int main()
{
    char continua;
    bool sair = false;

    do
    {
        cout << "Bem-vindo(a) à Papelaria Ideal!\n"
             << "========== Estoque ==========\n";
        cout << endl;

        do
        {
            readChar("Deseja adicionar mais itens ao carrinho? (S/n): ", continua);
        }
        while (continua != 's' && continua != 'S' &&
                continua != 'n' && continua != 'N');
        cout << endl;

        if (continua == 'n' || continua == 'N')
        {
            cout << "========== Cupom Fiscal ==========" << endl;
            cout << "Total da compra: R$ " << endl;
            sair = true;
        }
        else if (continua == 's' || continua == 'S')
        {
            sair = false;
        }
        cout << endl;
    }
    while (!sair);
    cout << "Obrigado por comprar na Papelaria Ideal. Volte sempre!\n";
}
