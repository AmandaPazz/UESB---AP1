#include <iostream>
#include <locale>
#include <cctype>
using namespace std;


int main(){
    setlocale(LC_ALL, "Portuguese");
        int a, b, ope;
        cout<<"Digite 2 n�meros: ";
        cin>>a;
        cin>>b;
        cout<<"Agora digite a opera��o (1-soma, 2-subtra��o, 3-multiplica��o, 4-divis�o): ", cin>>ope;
        
        switch(ope){
            case 1:
            cout<<"O resultado �: "<<a+b<<"\n\n";
            break;
            
            case 2:
            cout<<"O resultado �: "<<a-b<<"\n\n";
            break;
            
            case 3:
            cout<<"O resultado �: "<<a*b<<"\n\n";
            break;
            
            case 4:
            cout<<"O resultado �: "<<a/b<<"\n\n";
            break;
            
            default:
            cout<<"Opera��o inv�lida";
        }
    return 0;
}