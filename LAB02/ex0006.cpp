#include <iostream>
#include <locale>
#include <cctype>
using namespace std;


int main(){
    setlocale(LC_ALL, "Portuguese");
    
    for( ; ;){
        double num, saldo, gasto, pago, limite, final;
    
    cout<<"Digite o n�mero do cart�o: ", cin>>num;
    cout<<"Digite o saldo no in�cio no m�s: ", cin>>saldo;
    cout<<"Digite o total gasto no m�s: ", cin>>gasto;
    cout<<"Digite o total pago no m�s: ", cin>>pago;
    cout<<"Digite o limite do cart�o: ", cin>>limite;
    
    final = saldo + gasto - pago;
    
    if (final>limite){
        cout<<"Voc� excedeu o limite do cart�o\n\n";
    }
    else{
        cout<<"Voc� n�o excedeu o limite do cart�o\n\n";
    }
    }
  return 0;
}