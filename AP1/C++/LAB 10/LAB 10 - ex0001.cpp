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

int soma (int&, int&);
int soma (int&, float&);
int soma (int&, int&, int&);

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, num3;
    float num4;

    cout << "Digite 2 números inteiros: ";
    cin >> num1;
    cin >> num2;
    cout << soma(num1, num2);
    cout <<"\n\n";

    cout << "Digite 1 número inteiro e um número real: ";
    cin >> num1;
    cin >> num4;
    cout << soma(num1, num4);
    cout <<"\n\n";

    cout << "Digite 3 números inteiros ";
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cout << soma(num1, num2, num3);
    cout <<"\n\n";


return 0;
}

int soma (int&n1, int&n2){
    return n1 + n2;
}

int soma (int&n1, float&n2){
    return n1 + n2;
}

int soma (int&n1, int&n2, int&n3){
    return n1 + n2 + n3;
}