// Programa que calcula fatorial de um número//

#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Insira numero para calcular o fatorial ";
	cin >> num;
	if (num == 0) {
		cout << "O fatorial e: 1";
	}
	else {
		for (int i = num - 1; i > 0; i--)
		{
			num = num * i;
		}
		cout << "O fatorial e: " << num;
	}
}
