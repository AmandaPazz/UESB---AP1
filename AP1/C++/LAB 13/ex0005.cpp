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

int bubbleSortMelhor(int[], int);
int buscaBinaria(int[], int, int);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(0));

    int n = 500;
    int chave;
    int vetor[500];
    int verificar;

    system("cls");

    cout << "VETOR ORIGINAL:\n";
    for (int i = 0; i <= n - 1; i++)
    {
        vetor[i] = rand() % 501;
        cout << vetor[i] << "\n";
    }

    bubbleSortMelhor(vetor, n);

    cout << "\n\n\n*************************" << endl;

    cout << "VETOR ORDENADO:\n\n";
    for (int i = 0; i <= n - 1; i++)
    {
        cout << "Valor da " << i + 1 << "º posição:\n";
        cout << vetor[i] << "\n\n";
    }

    cout << "*************************" << endl;
    cout << "Digite a chave: ", cin >> chave;

    verificar = buscaBinaria(vetor, n, chave);

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

int bubbleSortMelhor(int v[], int n)
{
    int temp;

    for (int pass = 0; pass < n - 1; pass++)
    {

        bool verificar = false;

        for (int i = 0; i < n - 1 - pass; i++)
        {

            if (v[i] > v[i + 1])
            {
                temp = v[i];
                v[i] = v[i + 1];
                v[i + 1] = temp;
                verificar = true;
            }
        }

        if (verificar == false)
        {
            break;
        }
    }
}

int buscaBinaria(int v[], int n, int c)
{
    int inicio = 0, fim = n - 1, meio;

    while (inicio <= fim)
    {

        meio = (inicio + fim) / 2;

        if (v[meio] == c)
        {
            return meio;
        }
        else if (v[meio] < c)
        {
            inicio = meio + 1;
        }
        else
        {
            fim = meio - 1;
        }
    }

    return -1;
}