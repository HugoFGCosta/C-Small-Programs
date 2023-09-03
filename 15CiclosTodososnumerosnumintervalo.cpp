// Programa que apresenta todos os numeros inteiros entre dois numeros introduzidos

#include <iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout << "Insira o primeiro numero: ";
    cin >> num1;
    cout << "Insira o segundo numero: ";
    cin >> num2;
    if (num1<num2)
    {
        for (int i = num1; i <=num2; i++)
        {
            cout << i<<" ";
        }
    }
    else if (num1 > num2) {
        for (int i = num2; i <=num1; i++)
        {
            cout << i<<" ";
        }
    }
}
