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

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n = 10;
    int vetor[n] = {10, 5, 6, 3, 4, 2, 1, 7, 8, 9};
    int temp;

    cout << "Itens na ordem normal:\n\n";
    for (int i = 0; i < n - 1; i++)
    {
        cout << vetor[i] << setw(4);
    }

    for (int pass = 0; pass < n - 1; pass++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (vetor[i] > vetor[i + 1])
            {
                temp = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = temp;
            }
        }
    }

    cout << "\n\nItens na ordem crescente:\n\n";
    for (int i = 0; i <= n - 1; i++)
    {
        cout << vetor[i] << setw(4);
    }

    return 0;
}
