#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    double a, b;
    cout<<"Informe um número:", cin>>a;
    cout<<"Informe outro número:", cin>>b;
    cout<<"A soma é: "<< a + b << endl;
}