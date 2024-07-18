using namespace std;
#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    double a, b;
    cout<<"Digite um valor: ", cin>>a;
    cout<<"Digiete outro valor: ", cin>>b;
    
    if (a>b){
        cout<<a<<endl;
    }
    else if (b>a){
        cout<<b<<endl;
    }
    else{
        cout<<"Os valores são iguais"<<endl;
    }
}