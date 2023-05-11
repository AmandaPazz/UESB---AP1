using namespace std;
#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    char a;
    
    for (;;){
        cout<<"Digite o gênero (F ou M): ", cin>>a;
    
    if (a=='F'||a=='f'){
        cout<<"Feminino"<<endl;
    }
    else if (a=='M'||a=='m'){
        cout<<"Masculino"<<endl;
    }
    else{
        cout<<"Gênero não informado"<<endl;
    }
    }
    

    return 0;
}