#include <iostream>
#include <locale.h>
#include <ctime>
#include <cstdlib>
using namespace std;

int gerador(int, int);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num1, num2;
    srand(time(0));
    cout << "Digite 2 números: " << endl;
    cin >> num1;
    cin >> num2;
    cout << "O número gerado foi: \n"
         << gerador(num1, num2) << endl;
    return 0;
}

int gerador(int m, int n)
{
    int gerado = (rand() % (n - m)) + m;
    return gerado;
}
