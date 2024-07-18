#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a, b;
    cout<<"Qual o tamanho de arquivo para download (em MB)? ", cin>>a;
    cout<<"Qual a velocidade de um link de internet (em Mbps)? ", cin>>b;
    cout<<"O tempo aproximado de download do arquivo (em minutos) é: "<< (a/(b/8))/60<<" min"<<endl;
}