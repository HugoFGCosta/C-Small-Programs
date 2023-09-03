// Programa que verifica se N numeros são todos iguais
#include <iostream>
using namespace std;

int main()
{
    int Nnum,num,aux;
    cout << "Indique o numero de numeros que pretende introduzir";
    cin >> Nnum;
    cout << "Insira o primeiro num: ";
    cin >> aux;
    bool iguais = true;
    for (int i = 1; i < Nnum; i++)
    {
        cout << "Insira um numero: ";
        cin >> num;
        if (num != aux) {
            iguais = false;
        }
    }
    if (iguais) {
        cout << "Sao todos iguais.";
    }
    else {
        cout << "Nao sao iguais.";
    }
}
