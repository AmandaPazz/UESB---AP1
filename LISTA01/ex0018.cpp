using namespace std;
#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    char a;
    for (;;){
        
        cout<<"Digite uma letra: ", cin>>a;
        
        if (!isalpha(a)){
            cout<<"O caractere digitado não é uma letra"<<endl;
        }
        
        else if (a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U'){
            cout<<"Essa letra é uma vogal"<<endl;
            cout<<"                          "<<endl;
            cout<<"=========================="<<endl;
            cout<<"                          "<<endl;
        }
        
        else{
            cout<<"Essa letra é uma consoante"<<endl;
            cout<<"                          "<<endl;
            cout<<"=========================="<<endl;
            cout<<"                          "<<endl;
        }
        }
    
    return 0;
}