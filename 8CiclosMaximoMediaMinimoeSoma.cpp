// Programa que lê 10 numeros inteiros introduzidos e indica o máximo a média o mínimo e a soma//
#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    int num,min,max,soma=0;

    //1º Numero
    cout << "Insira o primeiro numero: ";
    cin >> num;

    max = min = soma = num; //Inicializa as variáveis

    //trabalhar próximos nove numeros
    for (int i = 0; i < 9; i++)
    {
        cout << "Digite o proximo numero: ";
        cin >> num;

        soma = soma + num;

        if (num > max) {
            max = num;
        }
        if (num < min) {
            min = num;
        }
    }
    double media = soma / 10.0;
    cout << "O maximo e: " << max << endl << "O minimo e: " << min << endl << "A soma e: " << soma <<endl<< "A media e: " << media << endl;
}

