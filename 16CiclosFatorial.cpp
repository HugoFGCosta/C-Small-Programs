// Calcula Fatorial de um numero.

#include <iostream>
using namespace std;

int main()
{
    int num,total=1;
    cout << "Insira numero que pretende calcular o fatorial: ";
    cin >> num;
    if (num == 0) {
        cout << "É igual 1.";
    }
    else {
        for(int i=1;i<num;i++)
        {
            total = total * (i + 1);

        }
    }
    cout << "Total do fatorial= " << total;
}
