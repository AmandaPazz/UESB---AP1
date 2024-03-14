#include <iostream>
#include <locale>
#include <cctype>
using namespace std;


int main(){
    setlocale(LC_ALL, "Portuguese");
        int a, b, ope;
        cout<<"Digite 2 números: ";
        cin>>a;
        cin>>b;
        cout<<"Agora digite a operação (1-soma, 2-subtração, 3-multiplicação, 4-divisão): ", cin>>ope;
        
        switch(ope){
            case 1:
            cout<<"O resultado é: "<<a+b<<"\n\n";
            break;
            
            case 2:
            cout<<"O resultado é: "<<a-b<<"\n\n";
            break;
            
            case 3:
            cout<<"O resultado é: "<<a*b<<"\n\n";
            break;
            
            case 4:
            cout<<"O resultado é: "<<a/b<<"\n\n";
            break;
            
            default:
            cout<<"Operação inválida";
        }
    return 0;
}