// Programa que imprime números inteiros entre 1 e 10 na mesma linha, primeiro em ordem crescente depois em ordem decrescente.//
#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    while (i <= 10) {
        cout << i<<" ";
        i++;
    }
    cout<<endl;
    i = 10;
    while (i >= 1) {
        cout << i<<" ";
        i--;
    }
}