#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a;
    cout<<"Qual a temperatura em graus Farenheit? ", cin>>a;
    cout<<"A temperatura em gruas Celsius é: "<< (5*(a-32))/9 << endl;
}