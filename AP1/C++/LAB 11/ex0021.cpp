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

int potencia (int, int);


int main(){
    setlocale(LC_ALL, "Portuguese");

    int num1, num2;

    while (true){
        cin >> num1 >> num2;
        cout << num1 << " elevado a " << num2 << " = ";
        cout << "\b\b\b = " <<  potencia(num1, num2);
    }

return 0;
}

int potencia (int i, int j){
    if (j == 0){
        return 1;
    }
    else{
        cout << i << " x ";
        int resp = i * potencia(i,j-1);
        return resp;
    }

    }
