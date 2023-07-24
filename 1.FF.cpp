#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    int linha, coluna;
    cout << " inserir linhas e colunas ";
    cin >> linha >> coluna;
    //criação matriz
    int** m = new int* [linha];
    for (int i = 0; i < linha; i++) {
        m[i] = new int[coluna];
    }
    //preenchimento da matriz
    cout << endl << "Matriz: " << endl;
    for (int i = 0; i < coluna; i++) {
        for (int j = 0; j < coluna; j++) {
            cout << " : ";
            cin >> m[i][j];
        }
    }
    //print da matriz
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            cout << " " << m[i][j];
        }
        cout << endl;
    }
}
