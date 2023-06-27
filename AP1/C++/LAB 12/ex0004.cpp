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

    int veta[5], vetb[5], vetc[5], num;

    for (int i = 0; i <= 4; i++)
    {
        do
        {
            cout << "Digite o " << i + 1 << "º valor do Vetor A: ", cin >> num;
            veta[i] = num;
        } while (num < 0);
    }

    cout << "\n\n";

    for (int i = 0; i <= 4; i++)
    {
        do
        {
            cout << "Digite o " << i + 1 << "º valor do Vetor B: ", cin >> num;
            vetb[i] = num;
        } while (num < 0);
    }

    cout << "\n\n";

    for (int i = 0; i <= 4; i++)
    {
        if (veta[i] > vetb[i])
        {
            vetc[i] = 1;
        }

        if (veta[i] < vetb[i])
        {
            vetc[i] = -1;
        }

        if (veta[i] == vetb[i])
        {
            vetc[i] = 0;
        }

        cout << setw(10) << veta[i] << setw(10) << vetb[i] << setw(10) << vetc[i] << endl;
    }

    return 0;
}
