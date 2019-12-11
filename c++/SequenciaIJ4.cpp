/*Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.
Entrada

Não há nenhuma entrada neste problema.
Saída

Imprima a sequencia conforme exemplo abaixo.*/


#include <iostream>

using std::cout;
using std::cin;

int main()
{
	float i=0, j=1;

	while(i <= 2.2){
		for(int y=0; y<3; y++){
			cout << "I=" << i << " J=" << j << "\n";
			++j; 
		}
		i+=0.2;
		j-=2.8;
	}

	return 0;
}