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

        cout << "Voc� ultrapassou o limite de peso em " << excesso <<"kg e dever� pagar uma multa de: R$" << fixed << setprecision(2) << multa << endl;
    }
    else if (peso > 0 && peso <= 50){
        cout << "Voc� n�o ultrapassou o limite, portanto n�o pagar� multa." << endl;
    }
    else{
        cout << "Voc� digitou uma valor inv�lido tente novamente" << endl;
    }

return 0;
}
