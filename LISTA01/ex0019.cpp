using namespace std;
#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    double num1, num2, num3;
    
    for (;;){
        
        cout<<"Digite tr�s n�meros: ", cin>>num1>>num2>>num3;
        
        if (num1>=num2 && num1>=num3){
            cout<<"O maior n�mero � "<<num1<<endl;
            cout<<"                 "<<endl;
            cout<<"================="<<endl;
            cout<<"                 "<<endl;
        }
        
        else if (num2>=num1 && num2>=num3){
            cout<<"O maior n�mero � "<<num2<<endl;
            cout<<"                 "<<endl;
            cout<<"================="<<endl;
            cout<<"                 "<<endl;
        }
            
        else{
            cout<<"O maior n�mero � "<<num3<<endl;
            cout<<"                 "<<endl;
            cout<<"================="<<endl;
            cout<<"                 "<<endl;
        }
        
        
        }
    return 0;
}