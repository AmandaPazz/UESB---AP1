#include <iostream>
#include <locale>
#include <cctype>
using namespace std;


int main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    char caractere;
    
    while(true){
    cout<<"Digite um caractere: ", cin>>caractere;
    num = caractere;
    cout<<"O número correspondente na tabela ASCII é :"<<num<<"\n\n";
    }
}
