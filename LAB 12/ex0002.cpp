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

    for (int i = 0; i < 50; i++)
    {
        cout << "Digite o " << i + 1 << "º número: ", cin >> num;
        vet1[i] = num;
    }

    for (int i = 0; i < 50; i++)
    {
        vet2[i] = vet1[i];

        cout << setw(5) << vet1[i] << setw(5) << " " << vet2[i] << endl;
    }

    return 0;
}
