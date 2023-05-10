#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int num = -1, i;
	setlocale(LC_ALL, "Portuguese");
	cin>>i;
	
	do{
	num++;
	if ((num % 3 == 2 && num/3 == i)){
		break;
	}
	}while(true);
	
	cout<<" O número "<< num<< " é o escolhido";
	
	return 0;
	
	
	
	
}

