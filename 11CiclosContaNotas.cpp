// Programa conta numero de alunos com cada nota possivel de 1 a 5

#include <iostream>
using namespace std;

int main()
{
    int alunos,nota,nota1=0,nota2=0,nota3=0,nota4=0,nota5=0;
	do
	{
		cout << "Insira numero de alunos: ";
		cin >> alunos;
	} while (alunos<1);
	for (int i = 0; i < alunos; i++)
	{
		cout << "Insira a nota do aluno: ";
		cin >> nota;
		switch (nota)
		{
		case 1:
			nota1 = nota1 + 1;
			break;
		case 2:
			nota2 = nota2 + 1;
			break;
		case 3:
			nota3 = nota3 + 1;		
			break;
		case 4:
			nota4 = nota4 + 1;
			break;
		case 5:
			nota5 = nota5 + 1;
			break;
		default:
			cout << "Nota fora de range, nao ira ser contabilizada!" << endl;
		}
	}
	cout << "Ha " << nota1 << " com 1, " << nota2 << " com 2, " << nota3 << " com 3," << nota4 << " com 4, " << nota5 << " com 5.";
}