#include <iostream>
#include <locale.h>
#include <ctime>
#include <cstdlib>
using namespace std;

int gerador(int);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num, num2;
    cout << "Digite a semente: ", cin >> num2;
    srand(num2);
    cout << "Digite um número: ", cin >> num;
    cout << gerador(num) << endl;

    return 0;
}

int gerador(int n)
{
    int gerado = rand() % n + 1;
    return gerado;
}
