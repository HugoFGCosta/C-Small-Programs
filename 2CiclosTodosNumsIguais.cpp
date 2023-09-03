//Programa que lê n números e indica se números são todos iguais//
#include <iostream>
using namespace std;

int main()
{
    int num, a,primNumero;
    cout << "Insira o numero de numeros que vai inserir ";
    cin >> a;
    cout << "Insira o primeiro numero ";
    cin >> primNumero;
    bool Iguais = true;
    for (int i = 1; i < a; i++)
    {
        cout << "Insira proximo numero: ";
        cin >> num;
        if (num != primNumero) {
            Iguais = false;
            break;
        }
    }
    if (Iguais) {
        cout << "Todos os numeros sao iguais.";
    }
    else {
        cout << "Os numeros sao diferentes.";
    }
}