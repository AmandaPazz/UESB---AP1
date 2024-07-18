#include <iostream>
#include <locale>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

int jogar();

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int jog1, jog2;
	srand(time(0));

	while (true)
	{
		cout << "Jogador 1 pressione, 0 para jogar os dados: ", cin >> jog1;

		if (jog1 == 0)
		{
			int jogou = jogar();
			if (jogou == 21)
			{
				cout << "O jogador 1 ganhou!!!" << endl;
				cout << "O jogador 2 perdeu!!!" << endl;
				return 0;
			}

			if (jogou == 7)
			{
				cout << "O jogador 2 ganhou!!!" << endl;
				cout << "O jogador 1 perdeu!!!" << endl;
				return 0;
			}
			Sleep(2000);
			cout << "A sua soma deu " << jogou << ", portanto você perdeu a vez.\n\n";
			Sleep(2000);
			system("cls");
		}

		cout << "Jogador 2 pressione, 0 para jogar os dados: ", cin >> jog2;

		if (jog2 == 0)
		{
			int jogou = jogar();
			if (jogou == 21)
			{
				cout << "O jogador 2 ganhou!!!" << endl;
				cout << "O jogador 1 perdeu!!!" << endl;
				return 0;
			}

			if (jogou == 7)
			{
				cout << "O jogador 1 ganhou!!!" << endl;
				cout << "O jogador 2 perdeu!!!" << endl;
				return 0;
			}
			Sleep(2000);
			cout << "A sua soma deu " << jogou << ", portanto você perdeu a vez.\n\n";
			Sleep(2000);
			system("cls");
		}
	}
}

int jogar()
{
	int soma = 0, dado;
	for (int i = 1; i <= 3; i++)
	{
		dado = rand() % 7 + 1;
		cout << setw(5) << dado << endl;
		soma += dado;
	}
	cout << "=====================" << endl;
	cout << setw(5) << "Soma = " << soma << endl;
	cout << "\n\n";
	return soma;
}
