using namespace std;
#include <iostream>
#include <cmath>

int main(){
    char turno;
    
    for (;;){
        cout<<"Em que turno vc estuda? M (matutino), ou V (Vespertino) ou N (Noturno): ", cin>>turno;
        
        switch(turno){
            case 'm':
            case 'M':
            cout<<"Bom dia! \n\n";
            break;
            
            case 'v':
            case 'V':
            cout<<"Boa tarde! \n\n";
            break;
            
            case 'n':
            case 'N':
            cout<<"Boa noite! \n\n";
            break;
            
            default:
            cout<<"Valor inválido \n\n";
            break;
        }
    }
    return 0;
}