#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>
#include <cctype>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

void bubbleSortMelhor(int[], int);
void bubbleSort(int[], int);
void imprimirVetores(int[], int[]);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(0));

    int n = 10;
    int vet1[n], vet2[n];

    (system("cls"));
    cout << "Itens na ordem normal:\n\n";
    cout << setw(10) << "VET1:" << setw(10) << "VET2:" << endl;

    for (int i = 0; i <= n - 1; i++)
    {
        vet1[i] = (rand() % 99) + 1;
        vet2[i] = vet1[i];

        cout << setw(8) << vet1[i] << setw(10) << vet2[i] << endl;
    }

    bubbleSort(vet1, n);
    bubbleSortMelhor(vet2, n);
    imprimirVetores(vet1, vet2);

    return 0;
}

void imprimirVetores(int v1[], int v2[])
{
    cout << "\n\n********************************\n\n";
    cout << "Itens na ordem crescente:\n\n";
    cout << setw(10) << "VET1:" << setw(10) << "VET2:" << endl;

    for (int i = 0; i <= 9; i++)
    {
        cout << setw(8) << v1[i] << setw(10) << v2[i] << endl;
    }
}

void bubbleSortMelhor(int v[], int n)
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

void bubbleSort(int v[], int n)
{
    int temp;

    for (int pass = 0; pass <= n - 1; pass++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] >= v[i + 1])
            {
                temp = v[i];
                v[i] = v[i + 1];
                v[i + 1] = temp;
            }
        }
    }
}
