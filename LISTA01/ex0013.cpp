#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a, b, ir, inss, sind;
    cout<<"Quanto voc� ganha por hora? ", cin>>a;
    cout<<"Qual o n�mero de horas trabalhadas no m�s? ", cin>>b;
    ir = 0.11*(a*b);
    inss = 0.08*(a*b);
    sind = 0.05*(a*b);
    cout<<"O seu sal�rio bruto �: "<<a*b<< endl;
    cout<<"Voc� pagou ao INSS: "<<inss<< endl;
    cout<<"Voc� pagou ao sindicato: "<<sind<< endl;
    cout<<"O seu sal�rio l�quido �: "<<(a*b)-ir-inss-sind<< endl;
}
