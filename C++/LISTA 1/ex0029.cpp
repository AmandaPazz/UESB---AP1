#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>
#include <cctype>
using namespace std;


int main(){
    setlocale(LC_ALL, "Portuguese");

    double area, litros, precoLata, precoGalao, latas, galao, folga, misturaLatas, misturaGaloes, precoMistura;

    cout << "Digite o tamanho da área em metros quadrados: ", cin >> area;

    folga = 1.1;
    area *= folga;

    litros = ceil(area / 6);
    latas = ceil(litros / 18);
    galao = ceil(litros / 3.6);
    misturaLatas = floor (litros / 18);
    misturaGaloes = ceil ((litros - 18 * misturaLatas)/3.6);


    precoLata = latas * 80;
    precoGalao = galao * 25;
    precoMistura = (misturaLatas * 80) + (misturaGaloes * 25);
    

    
    cout << "O número de latas de tinta é: " << latas << endl;
    cout << "O número de galões de tinta é: " << galao << endl;
    cout<< fixed << setprecision(2);
    cout << "O preço a ser pago pelas latas de tinta é R$: " << precoLata << endl;
    cout << "O preço a ser pago pelos galões de tinta é R$: " << precoGalao << endl;
    cout << "O preço a ser pago pela mistura é R$: " << precoMistura << endl;

return 0;
}

