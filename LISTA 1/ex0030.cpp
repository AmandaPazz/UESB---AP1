#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>
#include <cctype>
using namespace std;


int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int dia;

    cout << "Digite o número correspondente ao dia da semana: ", cin >> dia;

    switch (dia)
    {
    case 1:
        cout << "\n\nHoje é domingo" << endl;
        break;
    case 2:
        cout << "\n\nHoje é segunda" << endl;
        break;
    case 3:
        cout << "\n\nHoje é terça" << endl;
        break;
    case 4:
        cout << "\n\nHoje é quarta" << endl;
        break;
    case 5:
        cout << "\n\nHoje é quinta" << endl;
        break;
    case 6:
        cout << "\n\nHoje é sexta" << endl;
        break;
    case 7:
        cout << "\n\nHoje é sábado" << endl;
        break;    
    default:
        cout << "\n\nVocê digitou um valor inválido." << endl;
        break;
    }

return 0;
}
