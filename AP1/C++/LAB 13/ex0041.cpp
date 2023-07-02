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

void bubbleSortMelhor (int [], int);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n = 10;
    int vetor[n] = {10, 5, 6, 3, 4, 2, 1, 7, 8, 9};
  

    cout << "Itens na ordem normal:\n\n";
    for (int i = 0; i < n - 1; i++)
    {
        cout << vetor[i] << setw(4);
    }

    bubbleSortMelhor(vetor, n);
    
    return 0;

    
}

void bubbleSortMelhor (int v[], int n){
    int temp;
    bool verificar;

    for (int pass = 0; pass < n - 1; pass++)
    {
        verificar = false;

        for (int i = 0; i < n; i++)
        {
            if (v[i] > v[i + 1])
            {
                temp = v[i];
                v[i] = v[i + 1];
                v[i + 1] = temp;
                verificar = true;
            }
        }

        if (verificar == false){
            break;
        }
    }

    cout << "\n\nItens na ordem crescente:\n\n";
    for (int i = 0; i <= n - 1; i++)
    {
        cout << v[i] << setw(4);
    }

}