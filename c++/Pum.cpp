/*Escreva um programa que leia um valor inteiro N. Este N é a quantidade de linhas de saída que serão apresentadas na execução do programa.
Entrada

O arquivo de entrada contém um número inteiro positivo N.
Saída

Imprima a saída conforme o exemplo fornecido.*/


#include <iostream>

using std::cout;
using std::cin;

int main()
{
	int ciclos;
	int contador = 0;

	cin >> ciclos;

	for (int i = 0; i < ciclos; ++i)
	{
		++contador;
		cout << contador << " " ;
		++contador;
		cout << contador << " " ;
		++contador;
		cout << contador << " PUM\n";
		++contador;
	}

	return 0;
}