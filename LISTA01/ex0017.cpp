using namespace std;
#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    char a;
    
    for (;;){
        cout<<"Digite o g�nero (F ou M): ", cin>>a;
    
    if (a=='F'||a=='f'){
        cout<<"Feminino"<<endl;
    }
    else if (a=='M'||a=='m'){
        cout<<"Masculino"<<endl;
    }
    else{
        cout<<"G�nero n�o informado"<<endl;
    }
    }
    

    return 0;
}