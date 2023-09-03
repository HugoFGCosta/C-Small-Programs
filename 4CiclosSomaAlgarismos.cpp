// Programa que soma algarismos de um número//

#include <iostream>
using namespace std;

int main()
{
	int num, soma=0,aux;
	cout << "Insira um numero: ";
	cin >> num;
	aux = num;
	while (num > 0) {
		int algarismo = num % 10;
		soma = soma + algarismo;
		num = num / 10;
	}
	cout << "A soma de todos os algarismos e: " << soma;
}
