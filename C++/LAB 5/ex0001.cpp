#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	int num = -1, i;
	setlocale(LC_ALL, "Portuguese");
	cin >> i;

	do
	{
		num++;
	} while (!(num % 3 == 2 && num / 3 == i));

	cout << " O n�mero " << num << " � o escolhido";

	return 0;
}
