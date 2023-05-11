#include <iostream>
#include <locale>
#include <cctype>
using namespace std;


int main(){
    setlocale(LC_ALL, "Portuguese");
    
    for( ; ;){
        int num;
        cout<<"Digite um número inteiro positivo: ", cin>>num;
        
        if (num<0){
            cout<<"ERRO! VOCÊ DIGITOU UM VALOR NEGATIVO\n\n";
        }
        
        else{
            cout<<"O número digitado é "<<num<<"\n\n";
        }
    }
    return 0;
}
