#include <iostream>
#include <locale>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

int sortearCarta();

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int jog;
	int pontos1 = 0, pontos2 = 0, maior, maior2;

	while (true)
	{
		cout << "Dupla 1, digite 0 para sortear suas cartas: ", cin >> jog;

		if (jog == 0 || jog != 0)
		{
			cout << "\n";
			cout << "=====================\n";
			maior = sortearCarta();
			cout << "=====================\n";
			cout << "\n";
		}

		cout << "Dupla 2, digite 0 para sortear suas cartas: ", cin >> jog;

		if (jog == 0 || jog != 0)
		{
			cout << "\n";
			cout << "=====================\n";
			maior2 = sortearCarta();
			cout << "=====================\n";
			cout << "\n\n";
		}

		Sleep(3000);
		system("cls");

		if (maior > maior2)
		{
			pontos1++;
		}
		if (maior2 > maior)
		{
			pontos2++;
		}
		if (maior2 == maior)
		{
			cout << "EMPATE\n";
		}

		cout << "DUPLA 1: " << pontos1 << " ponto(s)\n";
		cout << "DUPLA 2: " << pontos2 << " ponto(s)\n";
		cout << "===================================\n\n";

		if (pontos1 == 5)
		{
			cout << "A DUPLA 1 VENCEU!!!" << endl;
			return 0;
		}
		else if (pontos2 == 5)
		{
			cout << "A DUPLA 2 VENCEU!!!" << endl;
			return 0;
		}
	}
}

int sortearCarta()
{

	int num = rand() % 10 + 1;
	int naipe = rand() % 4 + 1;

	switch (naipe)
	{
	case 1:
		cout << num << " de ouros" << endl;
		break;

	case 2:
		cout << num << " de copas" << endl;
		break;

	case 3:
		cout << num << " de espadas" << endl;
		break;

	case 4:
		cout << num << " de paus" << endl;
		break;
	}

	int num2 = rand() % 10 + 1;
	int naipe2 = rand() % 4 + 1;

	switch (naipe2)
	{
	case 1:
		cout << num2 << " de ouros" << endl;
		break;

	case 2:
		cout << num2 << " de copas" << endl;
		break;

	case 3:
		cout << num2 << " de espadas" << endl;
		break;

	case 4:
		cout << num2 << " de paus" << endl;
		break;
	}

	int maiorJog;

	if (num > num2)
	{
		maiorJog = num;
	}
	else if (num2 > num)
	{
		maiorJog = num2;
	}
	else if (num2 == num)
	{
		if (naipe > naipe2)
		{
			maiorJog = num;
		}
		else if (naipe < naipe2)
		{
			maiorJog = num2;
		}
		else if (naipe == naipe2)
		{
			maiorJog = num;
		}
	}
	return maiorJog;
}
