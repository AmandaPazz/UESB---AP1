using namespace std;
#include <iostream>
#include <cmath>

int main(){
    double sal1, sal2, percentual, aumento;
    
    for (;;){
        cout<<"Qual é o seu salário atual? ", cin>>sal1;
        
        if (sal1<=1280 && sal1>0 ){
            percentual = 0.2;
            aumento = 0.2*sal1;
            sal2 = aumento + sal1;
            cout<<"\nsalário antes do reajuste: "<<sal1<<"\no percentual de aumento aplicado: "<<"20%"<<"\nvalor do aumento: "<<
            aumento<<"\no novo salário, após o aumento: "<<sal2<<"\n=========================\n\n";
        }
        
        else if (sal1>1280 && sal1<=1700){
            percentual = 0.15;
            aumento = 0.15*sal1;
            sal2 = aumento + sal1;
            cout<<"\nsalário antes do reajuste: "<<sal1<<"\no percentual de aumento aplicado: "<<"15%"<<"\nvalor do aumento: "<<
            aumento<<"\no novo salário, após o aumento: "<<sal2<<"\n=========================\n\n";
        }
        
        else if (sal1>1700 && sal1<2500){
            percentual = 0.1;
            aumento = 0.1*sal1;
            sal2 = aumento + sal1;
            cout<<"\nsalário antes do reajuste: "<<sal1<<"\no percentual de aumento aplicado: "<<"10%"<<"\nvalor do aumento: "<<
            aumento<<"\no novo salário, após o aumento: "<<sal2<<"\n=========================\n\n";
        }
        
        else if (sal1>=2500){
            percentual = 0.05;
            aumento = 0.05*sal1;
            sal2 = aumento + sal1;
            cout<<"\nsalário antes do reajuste: "<<sal1<<"\no percentual de aumento aplicado: "<<"5%"<<"\nvalor do aumento: "<<
            aumento<<"\no novo salário, após o aumento: "<<sal2<<"\n=========================\n\n";
        }
        
        else{
            cout<<"Esse valor é inválido\n\n";
            return 0;
        }
    }
}