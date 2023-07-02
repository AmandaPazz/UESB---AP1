#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>
#include <cctype>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include <string>
using namespace std;

int buscabinaria(int[], int, int);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int dim = 100;
    int vetor[dim], chave;
    int busca;


    for (int i = 0; i <= 99; i++){
        vetor[i] = i+1;
        cout << "Valor da " << i + 1 << "º posição:\n" << vetor[i] << endl;
    }
    
    cout <<"\n\n**************************";
    cout << "\n\n\nDigite chave: ", cin >> chave;

    busca = buscabinaria(vetor, dim, chave);

    if (busca == -1){
        cout << "\n\nA chave não foi encontrada na posição.\n\n\n";
    }
    else{
        cout << "\n\nA chave está na " << busca + 1 << "º posição\n\n\n";
    }


    return 0;
}

int buscabinaria(int v[], int dim, int c)
{
    int inicio = 0, meio, fim = dim - 1;

    while (inicio <= fim){

        meio = (inicio + fim) / 2;

        if (v[meio] == c){
            return meio;
        }

        else if (v[meio] > c){
            fim = meio-1;
        }
        else{
            inicio = meio + 1;
        }


    }

    return -1;
}
