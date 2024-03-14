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

void bubbleSort(int[], int);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n = 10;
    int vetor[n] = {10, 5, 6, 3, 4, 2, 1, 7, 8, 9};

    cout << "Itens na ordem normal:\n\n";
    for (int i = 0; i <= n - 1; i++)
    {
        cout << vetor[i] << setw(4);
    }

    bubbleSort(vetor, n);

    return 0;
}

void bubbleSort(int v[], int n)
{
    for (int pass = 0; pass < n - 1; pass++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                int temp;
                temp = v[i];
                v[i] = v[i + 1];
                v[i + 1] = temp;
            }
        }
    }

    cout << "\n\nItens na ordem crescente:\n\n";
    for (int i = 0; i <= n - 1; i++)
    {
        cout << v[i] << setw(4);
    }
}