using namespace std;
#include <iostream>
#include <cmath>

int main(){
    double num1, num2, num3;
    
    for (;;){
        cout<<"Digite três números: ", cin>>num1>>num2>>num3, "\n";

        if (num1>=num2 && num1>=num3 && num2>=num3){
            cout<<"A ordem decrescente é : "<<num1<<", "<<num2<<", "<<num3<<", \n"<<endl;
        }
        else if (num1>=num2 && num1>=num3 && num2<=num3){
            cout<<"A ordem decrescente é : "<<num1<<", "<<num3<<", "<<num2<<", \n"<<endl;
        }
        else if (num1<=num2 && num1>=num3 && num2>=num3){
            cout<<"A ordem decrescente é : "<<num2<<", "<<num1<<", "<<num3<<", \n"<<endl;
        }
        else if (num1<=num2 && num1<=num3 && num2>=num3){
            cout<<"A ordem decrescente é : "<<num2<<", "<<num3<<", "<<num2<<", \n"<<endl;
        }
        else if (num1>=num2 && num1<=num3 && num2<=num3){
            cout<<"A ordem decrescente é : "<<num3<<", "<<num1<<", "<<num2<<", \n"<<endl;
        }
        else {
            cout<<"A ordem decrescente é : "<<num3<<", "<<num2<<", "<<num1<<", \n"<<endl;
        }
        }
    return 0;
}
