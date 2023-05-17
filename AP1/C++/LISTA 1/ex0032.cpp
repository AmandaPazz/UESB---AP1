#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>
#include <cctype>
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    double nota;

    cout << "Digite a sua nota: ";
    cin >> nota;

    if (nota >= 90 && nota <=100){
        cout << "Sua nota é A" << endl;
    }
    else if (nota >= 70 && nota <=89){
        cout << "Sua nota é B" << endl;
    }
    else if (nota >= 50 && nota <=69){
        cout << "Sua nota é C" << endl;
    }
    else if (nota >= 30 && nota <=49){
        cout << "Sua nota é D" << endl;
    }
    else if (nota >= 00 && nota <=29){
        cout << "Sua nota é E" << endl;
    }
    else{
        cout << "Valor inválido" << endl;
    }

 
    

    return 0;
}
