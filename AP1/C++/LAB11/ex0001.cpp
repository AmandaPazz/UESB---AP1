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
        cout << "\n\n" << potencia(num1, num2);
    }

return 0;
}

int potencia (int i, int j){
    if (j == 0){
        return 1;
    }
    else{
        return i * potencia(i,j-1);
    }

    }