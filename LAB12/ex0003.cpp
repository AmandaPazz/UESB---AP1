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

    int vet1[50], vet2[50], num;

    for (int i = 0; i <= 49; i++)
    {
        cout << "Digite o " << i + 1 << "º número: ", cin >> num;
        vet1[i] = num;
    }

    for (int j = 0; j <= 49; j++)
    {
        vet2[j] = vet1[49 - j];
        cout << setw(7) << vet1[j] << " " << setw(7) << vet2[j] << endl;
    }

    return 0;
}
