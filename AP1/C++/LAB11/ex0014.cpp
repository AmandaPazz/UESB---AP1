#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>
#include <cctype>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

void progressiva (int);


int main(){
    setlocale(LC_ALL, "Portuguese");

    int num1;

    while (true){
        cin >> num1;
        progressiva(num1);
        cout<<"\n\n";
    }

return 0;
}

void progressiva (int n){
    if (n==0){
        return;
      
    }
    progressiva(n-1);
    cout << n << "  ";
    
}
