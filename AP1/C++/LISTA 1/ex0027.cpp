#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>
#include <cctype>
using namespace std;


int main(){
    setlocale(LC_ALL, "Portuguese");
    double excesso, peso, multa;

    cout << "Digite o peso do peixe em quilos: ", cin >> peso;
    
    if (peso > 50){
        excesso = peso - 50;
        multa = excesso * 4;

        cout << "Você ultrapassou o limite de peso em " << excesso <<"kg e deverá pagar uma multa de: R$" << fixed << setprecision(2) << multa << endl;
    }
    else if (peso > 0 && peso <= 50){
        cout << "Você não ultrapassou o limite, portanto não pagará multa." << endl;
    }
    else{
        cout << "Você digitou uma valor inválido tente novamente" << endl;
    }

return 0;
}
