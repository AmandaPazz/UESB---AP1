#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>
#include <cctype>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    string nome, estadoCivil;
    int idade;
    float salario;
    char estado;

    cout << " Digite o seu nome: ", cin >> nome;
    cout << "\n";
    cout << " Digite o sua idade: ", cin >> idade;
    cout << "\n";
    cout << " Digite o seu salário: ", cin >> salario;
    cout << "\n";
    cout << " Digite o estado civil: (s)(c)(v)(d)(u) ", cin >> estado;
    cout << "\n\n";

    while (nome.length() <= 3)
    {
        cout << "Seu nome precisa ter mais de 3 caracteres. Por favor tente novamente. \n\n\n";
        cout << " Digite o seu nome: ", cin >> nome;
        cout << "\n\n";
    }

    while (idade < 0 or idade > 150)
    {
        cout << "Sua idade precisa ser entre 0 e 150. Por favor tente novamente. \n\n\n";
        cout << " Digite a seu idade: ", cin >> idade;
        cout << "\n\n";
    }

    while (salario < 0)
    {
        cout << "Seu salairo precisar ser maior que 0. Por favor tente novamente. \n\n\n";
        cout << " Digite o seu salário: ", cin >> idade;
        cout << "\n\n";
    }

    switch (estado)
    {
    case 's':
        estadoCivil = "solteiro(a)";
        break;

    case 'c':
        estadoCivil = "casado(a)";
        break;

    case 'v':
        estadoCivil = "viúvo(a)";
        break;

    case 'd':
        estadoCivil = "solteiro(a)";
        break;

    case 'u':
        estadoCivil = "unido(a) estavelmente";
        break;

    default:
        cout << "Você digitou um valor inválido. Por favor tente novamente. \n\n\n";
        cout << " Digite o estado civil: (s)(c)(v)(d)(u) ", cin >> estado;
        cout << "\n\n";
    }

    cout << "Olá " << nome << "!. Você tem " << idade << " anos, recebe um salário de R$" << fixed << setprecision(2) << salario << " e é " << estadoCivil << endl;

    return 0;
}
