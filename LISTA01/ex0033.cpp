#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>
#include <cctype>
using namespace std;


int main(){
    setlocale(LC_ALL, "Portuguese");

    int numero;

    cout << "Digite um n�mero inteiro de 0 a 10: ", cin >> numero;

    while (numero > 10 || numero < 0){
        cout << "Esse valor � inv�lido tente novamente\n\n";
        cout << "Digite um n�mero inteiro de 0 a 10: ", cin >> numero;

    }
    cout << "O n�mero escolhido foi: "<< numero << endl;



return 0;
}