/*
Escreva um programa que leia um valor inteiro N (1 < N < 1000). Este N é a quantidade de linhas de saída que serão apresentadas na execução do programa.

Entrada
O arquivo de entrada contém um número inteiro positivo N.

Saída
Imprima a saída conforme o exemplo fornecido.

Exemplo
        entrada         saida
        3               1 1 1
                        2 4 8
                        3 9 27
*/    
#include <iostream>
using namespace std;

class Helper{
    
    public: void squaredAndCube(int n){
        
        cout << n << " ";
        cout << n*n << " ";
        cout << n*n*n << endl;
        
    }
    
};

int main()
{
	int n;
    Helper help;
    
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        help.squaredAndCube(i);
    }
    
	return 0;
}
