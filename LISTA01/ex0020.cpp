using namespace std;
#include <iostream>
#include <cmath>

int main(){
    double num1, num2, num3, large, small;
    
    for (;;){
        cout<<"Digite tr�s n�meros: ", cin>>num1>>num2>>num3;

        if (num1>=num2){
            if (num1>=num3){
                large = num1;
            }
            else{
                large = num3;
            }
        }    
        
        else if (num2>=num1){
            if (num2>=num3){
                large = num2;
            }
            else{
                large = num3;
            }
            }
        
        cout<<"O maior valor �: "<<large<<endl;    
            
        if (num1<=num2){
            if (num1<=num3){
                small = num1;
            }
            else{
                small = num3;
            }
        }    
        
        else if (num2<=num1){
            if (num2<=num3){
                small = num2;
            }
            else{
                small = num3;
            }
            }
        cout<<"O menor valor �: "<<small<<"\n\n"<<"=================\n\n";
        }
    return 0;
}