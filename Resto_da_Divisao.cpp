/*
Escreva um programa que leia 2 valores X e Y e que imprima todos os valores entre eles cujo resto da divisão dele por 5 for igual a 2 ou igual a 3.
Entrada

O arquivo de entrada contém 2 valores positivos inteiros quaisquer, não necessariamente em ordem crescente.
Saída

Imprima todos os valores conforme exemplo abaixo, sempre em ordem crescente.
*/

#include <iostream>
using namespace std;

class Helper{
    
    public: bool isCrescent(int m, int n){
        if(n >= m)
            return true;
        return false;
    }
    
    public: void multiply(int m, int n){
        int sum=0;
        
        if(! this->isCrescent(m, n)){
                int aux=m;
                m=n;
                n=aux;
            }
        
        for(int i=m+1; i < n; i++){
            if((i%5 == 2) || (i%5 == 3))
                cout << i << endl;
        }
    }
    
};

int main()
{
	int m, n;
    Helper help;
    
    cin >> m;
    cin >> n;
    
    help.multiply(m, n);
    
	return 0;
}
