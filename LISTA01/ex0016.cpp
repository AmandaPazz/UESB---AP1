using namespace std;
#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    double a;
    cout<<"Digite um valor: ", cin>>a;
    
    if (a>0){
        cout<<"Esse valor � positivo"<<endl;
    }
    else if (a<0){
        cout<<"Esse valor � negativo"<<endl;
    }
    else{
        cout<<"Esse valor � 0"<<endl;
    }
    return 0;
}
