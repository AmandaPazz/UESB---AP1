#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    double a, b;
    cout<<"Informe um n�mero:", cin>>a;
    cout<<"Informe outro n�mero:", cin>>b;
    cout<<"A soma �: "<< a + b << endl;
}