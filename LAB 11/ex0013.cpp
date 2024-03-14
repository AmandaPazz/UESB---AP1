#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>
#include <cctype>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

int regressiva (int);


int main(){
    setlocale(LC_ALL, "Portuguese");

    int num1;

    while (true){
        cin >> num1;
        regressiva(num1);
        cout<<"\n\n";
    }

return 0;
}

int regressiva (int n){
    if (n==0){
        cout << "0";
        return 0;
        
    }
    cout << n << " , ";
    return regressiva(n-1);
}
