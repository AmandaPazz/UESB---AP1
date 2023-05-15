#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>
#include <cctype>
using namespace std;


int main(){
    setlocale(LC_ALL, "Portuguese");
    double altura, peso, ideal;
    char genero;

    cout << "Qual o seu gênero? (M - masculino)(F - feminino): ", cin >> genero;
    cout << "Qual a sua altura? (em metros): ", cin >> altura;

    if (genero == 'M' || genero == 'm'){
        ideal = (72.7 * altura) - 58;
    }
    else if (genero == 'F' || genero == 'f') {
        ideal = (62.1 * altura) - 44.7;
    }
    else{
        cout << "Seu gênero é inválido. Tente novamente" << endl;
    }

    cout << "Seu peso idel é igual a: " << ideal << endl;


return 0;
}
