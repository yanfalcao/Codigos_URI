/*Timelimit: 1

Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.
Entrada

Não há nenhuma entrada neste problema.
Saída

Imprima a sequencia conforme exemplo abaixo*/


#include <iostream>

using std::cout;
using std::cin;



int main()
{
	int i=1, j=60;

	do{
		cout << "I=" << i << " J=" << j << "\n";

		i += 3;
		j -= 5;
	}while(j >= 0);

	return 0;
}