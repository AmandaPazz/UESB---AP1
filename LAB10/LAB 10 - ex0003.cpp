#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>
#include <cctype>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include <string>
using namespace std;

int gera(int = 15);

int main()
{
    srand(time(0));
    setlocale(LC_ALL, "Portuguese");

    int numero, m;

    cout << "Digite um número: ", cin >> numero;
    cout << gera(numero) << endl;
    cout << gera() << endl;

    do
    {
        cout << "\nDigite um valor inteiro (pressione -1 para sair)" << endl;
        cin >> m;

        cout << "\n";
        cout << gera(m) << endl;
        cout << gera() << endl;

    } while (m != -1);

    return 0;
}

int gera(int n)
{
    int gerador = rand() % (n + 1);
    return gerador;
}