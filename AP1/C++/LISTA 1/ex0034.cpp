#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>
#include <cctype>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    string user, password;

    cout << "Digite seu nome de usuário: ", cin >> user;
    cout << "Digite sua senha: ", cin >> password;
    cout << "\n";

    while (user == password)
    {
        cout << "Sua senha não pode ser igual a seu nome de usuário. Tente novamente.\n\n";
        cout << "Digite seu nome de usuário: ", cin >> user;
        cout << "Digite sua senha: ", cin >> password;
        cout << "\n";
    }

    cout << "Cadastro realizado com sucesso :)";

    return 0;
}
