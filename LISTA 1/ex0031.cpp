#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>
#include <cctype>
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int dia;

    cout << "Digite o número correspondente ao mês do ano: ";
    cin >> dia;

    switch (dia) {
        case 1:
            cout << "\n\nEstamos em janeiro" << endl;
            break;
        case 2:
            cout << "\n\nEstamos em fevereiro" << endl;
            break;
        case 3:
            cout << "\n\nEstamos em março" << endl;
            break;
        case 4:
            cout << "\n\nEstamos em abril" << endl;
            break;
        case 5:
            cout << "\n\nEstamos em maio" << endl;
            break;
        case 6:
            cout << "\n\nEstamos em junho" << endl;
            break;
        case 7:
            cout << "\n\nEstamos em julho" << endl;
            break;
        case 8:
            cout << "\n\nEstamos em agosto" << endl;
            break;
        case 9:
            cout << "\n\nEstamos em setembro" << endl;
            break;
        case 10:
            cout << "\n\nEstamos em outubro" << endl;
            break;
        case 11:
            cout << "\n\nEstamos em novembro" << endl;
            break;
        case 12:
            cout << "\n\nEstamos em dezembro" << endl;
            break;
        default:
            cout << "\n\nVocê digitou um valor inválido." << endl;
            break;
    }

    return 0;
}
