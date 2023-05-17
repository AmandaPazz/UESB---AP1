#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	double area, custo;
	double custoTotal = 0;
	int numero, tipo;
	int contador = 0;

	cout << "Qual a área a ser pulverizada (em hectares)?\n", cin >> area;
	cout << "Quantas pulverizações você precisa?\n", cin >> numero;

	do
	{
		cout << "Qual o tipo de pulverização você quer? (1)(2)(3)(4)(5)\n", cin >> tipo;
		contador++;

		switch (tipo)
		{
		case 1:
			custo = area * 500;
			custoTotal += custo;
			break;

		case 2:
			custo = area * 1000;
			custoTotal += custo;
			break;

		case 3:
			custo = area * 1500;
			custoTotal += custo;
			break;

		case 4:
			custo = area * 2000;
			custoTotal += custo;
			break;

		case 5:
			custo = area * 3000;
			custoTotal += custo;
			break;
		}

	} while (contador < numero);

	cout << "\n\n\n";

	if (custoTotal > 75000){
		if (area > 100){
		custoTotal = custoTotal - custoTotal * 0.05;
		cout << "Você garantiu um desconto de 5%\n\n\n";
		}

		double maisValia, desconto;
		maisValia = custoTotal - 75000;
		desconto = maisValia * 0.1;
		custoTotal = custoTotal - desconto;
		cout << "Você garantiu um desconto de 10% no valor adicional a partir de R$75.000\n";

		}

	else if (area > 100){
		custoTotal = custoTotal - custoTotal * 0.05;
		cout << "Você garantiu um desconto de 5%\n\n\n";
	}

	cout << "O valor a ser pago é igual a: R$\n"
		 << custoTotal << "\n\n";

	return 0;
}
