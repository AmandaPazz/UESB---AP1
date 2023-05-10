#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    double a;
    cout<<"Informe um n�mero:", cin>>a;
    cout<<"O n�mero informado foi: "<< a << endl;
}