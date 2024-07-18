#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>
#include <cctype>
using namespace std;


int main(){
    setlocale(LC_ALL, "Portuguese");

    double area, litros, precoLata, precoGalao, latas, galao, folga, misturaLatas, misturaGaloes, precoMistura;

    cout << "Digite o tamanho da �rea em metros quadrados: ", cin >> area;

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
    

    
    cout << "O n�mero de latas de tinta �: " << latas << endl;
    cout << "O n�mero de gal�es de tinta �: " << galao << endl;
    cout<< fixed << setprecision(2);
    cout << "O pre�o a ser pago pelas latas de tinta � R$: " << precoLata << endl;
    cout << "O pre�o a ser pago pelos gal�es de tinta � R$: " << precoGalao << endl;
    cout << "O pre�o a ser pago pela mistura � R$: " << precoMistura << endl;

return 0;
}

