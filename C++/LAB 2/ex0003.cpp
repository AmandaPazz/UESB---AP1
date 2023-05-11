#include <iostream>
#include <locale>
#include <cctype>
using namespace std;


int main(){
    setlocale(LC_ALL, "Portuguese");
    
    for( ; ;){
     int a,b;
     cout<<"Digite um número inteiro:", cin>>a;
     b=a;
     cout<<"O valor das variáveis é: "<<a<<" e "<<b<<"\n\n";
    }
    return 0;
}