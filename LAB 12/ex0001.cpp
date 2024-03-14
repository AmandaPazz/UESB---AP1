#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vetor[21], num;
    bool par = true;

    for (int i = 1; i <= 20; i++)
    {
        do
        {
            cout << "Digite o " << i << "º número: ", cin >> num;
            vetor[i] = num;

            if (num < 0)
            {
                cout << "\n\nDigite apenas valores positivos!!\n\n";
            }

            if (num % 2 != 0)
            {
                par = false;
            }

        } while (num < 0);
    }

    if (par == false)
    {
        cout << "\n\nO vetor possui pelo menos um valor ímpar.\n\n";
    }
    else
    {
        cout << "\n\nO vetor possui apenas valores pares.\n\n";
    }

    return 0;
}
