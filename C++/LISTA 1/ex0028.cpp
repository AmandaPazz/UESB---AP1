#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>
#include <cctype>
using namespace std;


int main(){
    setlocale(LC_ALL, "Portuguese");

    double area, litros, preco, latas;

    cout << "Digite o tamanho da área em metros quadrados: ", cin >> area;
    litros = ceil(area / 3);
    latas = ceil(litros / 18);
    preco = latas * 80;

    
    cout << "O npuemro de latas de tinta é: " << latas << endl;
    cout<< fixed << setprecision(2);
    cout << "O preço a ser pago pelas latas de tinta é R$: " << preco << endl;


return 0;
}
