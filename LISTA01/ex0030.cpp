#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>
#include <cctype>
using namespace std;


int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int dia;

    cout << "Digite o n�mero correspondente ao dia da semana: ", cin >> dia;

    switch (dia)
    {
    case 1:
        cout << "\n\nHoje � domingo" << endl;
        break;
    case 2:
        cout << "\n\nHoje � segunda" << endl;
        break;
    case 3:
        cout << "\n\nHoje � ter�a" << endl;
        break;
    case 4:
        cout << "\n\nHoje � quarta" << endl;
        break;
    case 5:
        cout << "\n\nHoje � quinta" << endl;
        break;
    case 6:
        cout << "\n\nHoje � sexta" << endl;
        break;
    case 7:
        cout << "\n\nHoje � s�bado" << endl;
        break;    
    default:
        cout << "\n\nVoc� digitou um valor inv�lido." << endl;
        break;
    }

return 0;
}
