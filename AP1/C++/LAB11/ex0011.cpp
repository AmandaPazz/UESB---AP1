#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>
#include <cctype>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

int somatorio (int);


int main(){
    setlocale(LC_ALL, "Portuguese");

    int num1;

    while (true){
        cin >> num1;
        cout << somatorio(num1) << "\n\n" ;
    }

return 0;
}

int somatorio (int n){
    if (n==0){
        cout << "0 = ";
        return 0;
        
    }
    cout << n << " + ";
    return n + somatorio(n-1);
}