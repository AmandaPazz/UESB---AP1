#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>
#include <cctype>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

int multi (int, int);


int main(){
    setlocale(LC_ALL, "Portuguese");

    int num1, num2;

    while (true){
        cin >> num1;
        cin >> num2;
        
        cout << "\n"<< num1 << " x " << num2 << " = ";
        cout << multi(num1, num2) << "\n\n";
    }

return 0;
}

int multi (int n, int m){
    if (m==0){
        cout << "0 = ";
        return 0;
        
    }
    cout << n << " + ";
    return n + multi(n, m-1);
}
