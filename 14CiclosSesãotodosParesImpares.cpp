// Programa que indica se numeros são todos pares impares ou misto.
#include <iostream>
using namespace std;

int main()
{
    int Nnum,num;
	cout << "Insira o numero de numeros que pretende introduzir: ";
	cin >> Nnum;
	bool par = false;
	bool impar = false;
	for (int i = 0; i < Nnum; i++)
	{
		cout << "Introduza um numero: ";
		cin >> num;
		if (num % 2 != 0) {
			impar = true;
		}
		else {
			par = true;
		}
	}
	if (par&&impar)
	{
		cout << "Combinacao de impares e pares.";

	}
	else if (par)
	{
		cout << "Sao pares";
	}
	else if (impar) {
		cout<<"Sao impares";
	}
}
