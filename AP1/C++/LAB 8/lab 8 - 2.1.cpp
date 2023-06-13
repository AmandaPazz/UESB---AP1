#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>
#include <cctype>
using namespace std;

int divisao(double &, double &);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    double numerador, denominador;

    cout << "Digite o numerador: ", cin >> numerador;
    cout << "Digite o denominador: ", cin >> denominador;

    int funcao = divisao(numerador, denominador);

    if (funcao == 0)
    {
        cout << "\nA divisão não é possível" << endl;
    }
    else
    {
        cout << "O resultado da divisão é " << numerador / denominador << endl;
    }

    return 0;
}

int divisao(double &n, double &d)
{
    if (d == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}