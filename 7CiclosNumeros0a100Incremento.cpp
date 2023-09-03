// Numeros de 0 a 100 em intervalos (incrementos) dados pelo utilizador. O incremento deve ser entre 1 e 10//
#include <iostream>
using namespace std;
int main()
{
    int incr;
    do {
        cout << "Insira valor do incremento: ";
        cin >> incr;
        if (incr < 1 || incr>10) {
            cout << "Incremento fora de range!" << endl;
        }
    } while (incr < 1 || incr>10);
    for (int i = 0; i <= 100; incr)
    {
        cout << i << endl;
        i+=incr;
    }
}
