#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a, b, ir, inss, sind;
    cout<<"Quanto você ganha por hora? ", cin>>a;
    cout<<"Qual o número de horas trabalhadas no mês? ", cin>>b;
    ir = 0.11*(a*b);
    inss = 0.08*(a*b);
    sind = 0.05*(a*b);
    cout<<"O seu salário bruto é: "<<a*b<< endl;
    cout<<"Você pagou ao INSS: "<<inss<< endl;
    cout<<"Você pagou ao sindicato: "<<sind<< endl;
    cout<<"O seu salário líquido é: "<<(a*b)-ir-inss-sind<< endl;
}
