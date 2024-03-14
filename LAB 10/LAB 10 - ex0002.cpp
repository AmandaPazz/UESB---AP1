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

template <class T>
void multiplos(T &, T, int);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int soma1;
    int x1 = 2;
    int n1 = 10;

    multiplos(soma1, x1, n1);

    float soma2;
    float x2 = 3.5;
    int n2 = 15;

    multiplos(soma2, x2, n2);

    return 0;
}

template <class T>
void multiplos(T &soma, T x, int n)
{
    soma = 0;
    for (int i = 1; i <= n; i++)
    {
        soma += (i * x);
    }
    soma += 1;
    cout << soma << endl;
}
