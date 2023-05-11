#include <iostream>
#include <locale>
#include <cctype>
using namespace std;


int main(){
    setlocale(LC_ALL, "Portuguese");
    
    for( ; ;){
        double num, saldo, gasto, pago, limite, final;
    
    cout<<"Digite o número do cartão: ", cin>>num;
    cout<<"Digite o saldo no início no mês: ", cin>>saldo;
    cout<<"Digite o total gasto no mês: ", cin>>gasto;
    cout<<"Digite o total pago no mês: ", cin>>pago;
    cout<<"Digite o limite do cartão: ", cin>>limite;
    
    final = saldo + gasto - pago;
    
    if (final>limite){
        cout<<"Você excedeu o limite do cartão\n\n";
    }
    else{
        cout<<"Você não excedeu o limite do cartão\n\n";
    }
    }
  return 0;
}