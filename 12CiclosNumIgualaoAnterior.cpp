// Lê 10 numeros e indica se um número é igual ao anterior
#include <iostream>
using namespace std;

int main()
{
    int num,aux,conta=0;
	cout << "Insira o primeiro numero inteiro: ";
	cin >> num;
	aux = num;
	for (int i = 1; i < 10; i++)
	{
		cout << "Insira um numero inteiro: ";
		cin >> num;
		if (num==aux)
		{
			conta = conta + 1;
		}
		aux = num;
	}
	cout << "Ha " << conta << " numeros iguais ao anterior.";
}
