// Programa que soma algarismos

#include <iostream>
using namespace std;

int main()
{
    int num,alg,soma=0;
    cout << "Insira um numero: ";
    cin >> num;
    while (num != 0) {
        alg = num % 10;
        num = num / 10;
        soma = soma + alg;
    }
    cout << "A soma dos algarismos e = " << soma;
}
