using namespace std;
#include <iostream>
#include <cmath>

int main(){
    double num1, num2, num3;
    
    for (;;){
        cout<<"Digite tr�s n�meros: ", cin>>num1>>num2>>num3, "\n";

        if (num1>=num2 && num1>=num3 && num2>=num3){
            cout<<"A ordem decrescente � : "<<num1<<", "<<num2<<", "<<num3<<", \n"<<endl;
        }
        else if (num1>=num2 && num1>=num3 && num2<=num3){
            cout<<"A ordem decrescente � : "<<num1<<", "<<num3<<", "<<num2<<", \n"<<endl;
        }
        else if (num1<=num2 && num1>=num3 && num2>=num3){
            cout<<"A ordem decrescente � : "<<num2<<", "<<num1<<", "<<num3<<", \n"<<endl;
        }
        else if (num1<=num2 && num1<=num3 && num2>=num3){
            cout<<"A ordem decrescente � : "<<num2<<", "<<num3<<", "<<num2<<", \n"<<endl;
        }
        else if (num1>=num2 && num1<=num3 && num2<=num3){
            cout<<"A ordem decrescente � : "<<num3<<", "<<num1<<", "<<num2<<", \n"<<endl;
        }
        else {
            cout<<"A ordem decrescente � : "<<num3<<", "<<num2<<", "<<num1<<", \n"<<endl;
        }
        }
    return 0;
}
