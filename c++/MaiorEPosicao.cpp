

/*Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.
Entrada

O arquivo de entrada contém 100 números inteiros, positivos e distintos.
Saída

Apresente o maior valor lido e a posição de entrada, conforme exemplo abaixo.*/


#include <iostream>

using std::cout;
using std::cin;

int main()
{
	int tam = 100;
	int numbers[tam];
	int maior;
	int posicao;

	for(int i=0; i < tam; i++){
		cin >> numbers[i];
	}

	maior = numbers[0];
	posicao = 1;

	for(int i=0; i < tam; i++){
		if(numbers[i] > maior){
			maior = numbers[i];
			posicao = ++i;
		}
	}

	cout << maior << "\n" << posicao << "\n";

	return 0;
}