#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>
#include <cctype>
using namespace std;

void divisao(int &, int &, int &, int &);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2,resultado1, resultado2;

    cout << "Digite dois núemeros para serem divididos por 10: " << endl;
    cin >> num1;
    cin >> num2;

    divisao(num1, num2, resultado1, resultado2);

    cout << "Os resultados são: " << resultado1 << ", " << resultado2 << endl;

    return 0;
}

void divisao(int &n1, int &n2, int &r1, int &r2)
{
    r1 = n1 / 10;
    r2 = n2 / 10;
}