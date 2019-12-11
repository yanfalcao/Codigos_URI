/*
Leia um conjunto não determinado de pares de valores M e N (parar quando algum dos valores for menor ou igual a zero). Para cada par lido, mostre a sequência do menor até o maior e a soma dos inteiros consecutivos entre eles (incluindo o N e M).
Entrada

O arquivo de entrada contém um número não determinado de valores M e N. A última linha de entrada vai conter um número nulo ou negativo.
Saída

Para cada dupla de valores, imprima a sequência do menor até o maior e a soma deles, conforme exemplo abaixo.
*/

#include <iostream>
using namespace std;

class Helper{
    
    public: bool isCrescent(int m, int n){
        if(n >= m)
            return true;
        return false;
    }
    
    public: bool isLessOrEqualsOfZero(int m, int n){
        if((m <= 0) || (n <= 0))
            return true;
        return false;
    }
    
    public: void displayCrescentAndTheSum(int m, int n){
        int sum=0;
        
        if(! this->isCrescent(m, n)){
                int aux=m;
                m=n;
                n=aux;
            }
        
        for(int i=m; i <= n; i++){
            cout << i << " ";
            sum += i;
        }
        cout << "Sum=" << sum << endl;
    }
    
};

int main()
{
	int m, n;
    Helper help;
    
    cin >> m >> n;
    
    while(! help.isLessOrEqualsOfZero(m, n)){

        help.displayCrescentAndTheSum(m, n);
            
        cin >> m >> n;
    }
    
	return 0;
}
