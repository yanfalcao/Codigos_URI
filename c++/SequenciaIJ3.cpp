

//Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.
//Entrada

//Não há nenhuma entrada neste problema.
//Saída

//Imprima a sequencia conforme exemplo abaixo.


#include <iostream>

using std::cout;
using std::cin;

int main()
{
	int i=1, j=7;

	for(int x=0; x < 5; x++){
		for(int y=0; y<3; y++){
			cout << "I=" << i << " J=" << j << "\n";
			--j; 
		}
		i+=2;
		j+=5;
	}

	return 0;
}