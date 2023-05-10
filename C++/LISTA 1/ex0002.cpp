#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    double a;
    cout<<"Informe um número:", cin>>a;
    cout<<"O número informado foi: "<< a << endl;
}