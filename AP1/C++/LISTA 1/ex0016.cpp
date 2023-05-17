using namespace std;
#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    double a;
    cout<<"Digite um valor: ", cin>>a;
    
    if (a>0){
        cout<<"Esse valor é positivo"<<endl;
    }
    else if (a<0){
        cout<<"Esse valor é negativo"<<endl;
    }
    else{
        cout<<"Esse valor é 0"<<endl;
    }
    return 0;
}
