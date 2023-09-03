// Programa que conta o numero de alunos e idades até ser itroduzido o -1 depois indica a media de idades.
#include <iostream>
using namespace std;

int main()
{
    int soma=0, idade,nalunos=0;
    do {
        cout << "Insira idade do aluno quando quiser finalizar insira -1: ";
        cin >> idade;
        if (idade < -1) {
            cout << "Inseriu valor errado.";
        }
        if (idade == -1) {
            cout << "Programa irá ser finalizado apos apresentaçao dos resultados." << endl;
            break;
        }
        nalunos = nalunos + 1;
        soma = soma + idade;
    } while (idade != -1);
    float media = static_cast<float>(soma) / nalunos;
    cout << "Ha " << nalunos << " alunos." << endl << "A media de idades e: " << media << " anos.";
}
