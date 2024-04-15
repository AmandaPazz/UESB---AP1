#include <iostream>
#include <locale>
using namespace std;


int main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    char caractere;
    
    while(true){
    cout<<"Digite um n�mero inteiro: ", cin>>num;
    caractere = num;
    cout<<"O caractere correspondente na tabela ASCII é :"<<caractere<<"\n\n";
    }
}
