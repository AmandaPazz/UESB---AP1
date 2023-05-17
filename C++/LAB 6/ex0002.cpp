#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>
#include <cctype>
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int turmas, aprovados = 0, reprovados = 0, alunos = 0;
    double nota1, nota2, nota3, mediaAluno, mediaTurma, somaTurma = 0;
    char opcao;

    cout << "Quantas turmas precisam ser analisadas? " << endl;
    cin >> turmas;
    cout << "\n\n";

    for (int i = 1; i <= turmas; i++){
        cout << "Turma " << i << endl;

        while (true){
            cout << "Deseja adicionar um aluno? (precione N se deseja sair): ", cin >> opcao;
            
           

            if (toupper(opcao) == 'N'){
                break;
            } 

            alunos +=1;
            cout << "Digite a primeira nota: ", cin >> nota1;
            cout << "Digite a segunda nota: ", cin >> nota2;
            cout << "Digite a terceira nota: ", cin >> nota3;
            cout << "\n\n";


            mediaAluno = (nota1 + nota2 + nota3) / 3;
            somaTurma += mediaAluno;

            if (mediaAluno >= 7){
                aprovados++;
            }
            else{
                reprovados++;
            }
            
            
        }
        mediaTurma = somaTurma / alunos;
        somaTurma = 0;
        alunos = 0;
        cout << "\nA média dessa turma é: " << mediaTurma << "\n\n\n";
    }

    cout << "O número de alunos aprovados é: " << aprovados << endl;
    cout << "O número de alunos reprovados é: " << reprovados << endl;




    return 0;
}
