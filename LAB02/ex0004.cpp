#include <iostream>
#include <locale>
#include <cctype>
using namespace std;


int main(){
    setlocale(LC_ALL, "Portuguese");
    
    for( ; ;){
        int num;
        cout<<"Digite um n�mero inteiro positivo: ", cin>>num;
        
        if (num<0){
            cout<<"ERRO! VOC� DIGITOU UM VALOR NEGATIVO\n\n";
        }
        
        else{
            cout<<"O n�mero digitado � "<<num<<"\n\n";
        }
    }
    return 0;
}
