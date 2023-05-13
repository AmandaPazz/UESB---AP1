#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>
#include <cctype>
using namespace std;


int main(){
    setlocale(LC_ALL, "Portuguese");

    double valorHora;
    int horasTrabalhadas;

    cout << "Digite o valor da sua hora: R$ ", cin >> valorHora;
    cout << "Digite a quantidade de horas trabalhadas: ", cin >> horasTrabalhadas;

    double salarioBruto = valorHora * horasTrabalhadas;
    double ir;
    int i;
    double inss = salarioBruto * 0.1;
    double fgts = salarioBruto * 0.11;

    if (salarioBruto > 0 and salarioBruto <= 2500){
        ir = salarioBruto * 0;
        i = 0;
    }
    else if (salarioBruto > 2500 and salarioBruto <= 3500){
        ir = salarioBruto * 0.05;
        i = 5;
    }
    else if (salarioBruto > 3500 and salarioBruto <= 5500){
        ir = salarioBruto * 0.1;
        i = 10;
    }
    else if (salarioBruto > 5500){
        ir = salarioBruto * 0.2;
        i = 20;
    }
    else{
        cout << "Os valores são inválidos. Tente novamente" << endl;
        return 1;
    }

    double totalDescontos = ir + inss;
    double salarioLiquido = salarioBruto - totalDescontos;

    cout << fixed <<setprecision(2);
    cout << "\nSalário Bruto: R$ " << salarioBruto << endl;
    cout << "(-) IR (" << i <<"%)" << " : R$ " << ir << endl;
    cout << "(-) INSS (10%): R$ " << inss << endl;
    cout << "FGTS (11%): R$ " << fgts << endl;
    cout << "Total de descontos: R$ " << totalDescontos << endl;
    cout << "Salário Líquido: R$ " << salarioLiquido << endl; 


return 0;
}
