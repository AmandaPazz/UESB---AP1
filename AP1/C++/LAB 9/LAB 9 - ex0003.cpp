#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>
#include <cctype>
using namespace std;

void teste();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int sentinela;

    do
    {
        cout << "Precione -1 para sair do laço" << endl;
        cin >> sentinela;
        cout << "\n";

        teste();

    } while (sentinela != -1);

    return 0;
}

void teste()
{
    static int contador = 0;
    auto nova = 0;

    contador++;
    nova += 5;

    cout << "CONTADOR: " << contador << endl;
    cout << "NOVA: " << nova << endl;
    cout << "\n";
}