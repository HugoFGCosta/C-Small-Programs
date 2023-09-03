// Programa em que utilizador vai inserindo numeros positivos até inserir 0. No fim indica percentagem de pares

#include <iostream>
using namespace std;

int main()
{
    int num=1,contaPares=0,contaImpares=0;
	while(num!=0)
	{
		cout << "Insira um numero positivo ou 0 para terminar: ";
		cin >> num;
		if (num<0)
		{
			cout << "Introduziu um numero negativo!" << endl;
			continue;
		}
		if (num == 0) {
			break;
		}
		if (num % 2 == 0) {
			contaPares = contaPares + 1;
		}
		else if (num % 2 != 0) {
			contaImpares = contaImpares + 1;
		}
	}
	int TotalNum = contaPares + contaImpares;
	int PercPares = contaPares * 100 / TotalNum;
	cout << "A percentagem de pares e: "<<PercPares;
}

