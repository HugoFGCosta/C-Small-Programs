// Programa que imprime todos os números inteiros num interválo entre dois valores//

#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cout << "Insira dois numeros ";
	cin >> num1 >> num2;
	if (num1 < num2) {
		while (num1 <= num2) {
			cout << num1;
			num1++;
		}
	}
	else if (num1 > num2) {
		while (num1 >= num2) {
			cout << num2;
			num2++;
		}
	}
	else {
		cout << "Sao iguais, nao ha intervalo entre eles.";
	}
}
