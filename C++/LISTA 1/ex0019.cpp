using namespace std;
#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    double num1, num2, num3;
    
    for (;;){
        
        cout<<"Digite três números: ", cin>>num1>>num2>>num3;
        
        if (num1>=num2 && num1>=num3){
            cout<<"O maior número é "<<num1<<endl;
            cout<<"                 "<<endl;
            cout<<"================="<<endl;
            cout<<"                 "<<endl;
        }
        
        else if (num2>=num1 && num2>=num3){
            cout<<"O maior número é "<<num2<<endl;
            cout<<"                 "<<endl;
            cout<<"================="<<endl;
            cout<<"                 "<<endl;
        }
            
        else{
            cout<<"O maior número é "<<num3<<endl;
            cout<<"                 "<<endl;
            cout<<"================="<<endl;
            cout<<"                 "<<endl;
        }
        
        
        }
    return 0;
}