// Programa dado um número inteiro entre 1 e 9 apresente a tabuada desse número//
#include <iostream>
using namespace std;

int main()
{
    int num;
    do {
        cout << "Indique um numero: ";
        cin >> num;
        if (num <= 0 || num > 9) {
            cout << "Numero fora de range!" << endl;
        }
    } while (num <= 0 || num > 9);
    for (int i = 1; i <= 10; i++)
    {
        cout << num << "x" << i << "=" << num * i<<endl;
    }
}