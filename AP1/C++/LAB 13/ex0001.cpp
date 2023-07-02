#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>
#include <cctype>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include <string>
#include <algorithm>
using namespace std;

int pesquisalinear(int[], int);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(0));

    int chave;
    int vetor[500];
    int verificar;

    for (int i = 0; i <= 499; i++)
    {
        vetor[i] = rand() % 501;
        cout << "Valor da " << i + 1 << "º posição:\n";
        cout << vetor[i] << "\n\n";
    }

    cout << "*************************" << endl;
    cout << "Digite a chave: ", cin >> chave;

    verificar = pesquisalinear(vetor, chave);

    if (verificar == -1)
    {
        cout << "A chave não foi encontrada\n";
    }
    else
    {
        cout << "A chave está na " << verificar + 1 << "º posição.\n\n\n";
    }

    return 0;
}

int pesquisalinear(int v[], int c)
{

    for (int i = 0; i <= 499; i++)
    {
        if (v[i] == c)
        {
            return i;
        }
    }

    return -1;
}
