using namespace std;
#include <iostream>
#include <cmath>

int main(){
    double num1, num2, num3, small;
    
    for (;;){
        cout<<"Digite o pre�o dos tr�s produtos: ", cin>>num1>>num2>>num3;

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
        cout<<"O produto mais barato � o que custa: "<<small<<"\n\n"<<"=================\n\n";
        }
    return 0;
}