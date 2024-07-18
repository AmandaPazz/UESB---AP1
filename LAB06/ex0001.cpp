#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>
#include <cctype>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int produtos = 0, clientes;
    double mediaProdutos, mediaGasto, preco, totalPreco = 0, totalGasto = 0;

    cout << "Qauntos clientes ser�o atendidos? " << endl;
    cin >> clientes;
    cout << "\n\n";

    for (int i = 1; i <= clientes; i++)
    {
        cout << "Digite o valor de cada produto: (insira um valor negativo para encerrar): " << endl;

        do
        {
            cin >> preco;

            if (preco < 0)
            {
                break;
            }

            totalPreco += preco;
            produtos += 1;
        } while (preco >= 0);

        mediaProdutos = totalPreco / produtos;

        cout << fixed << setprecision(2) << "A m�dia dos produtos para esse cliente �: R$" << mediaProdutos << "\n\n\n";

        totalPreco = 0;
        produtos = 0;
        totalGasto += mediaProdutos;
    }

    mediaGasto = totalGasto / clientes;
    cout << fixed << "A m�dia de gasto por cliente �: R$" << mediaGasto;

    return 0;
}
