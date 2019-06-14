/*

Escreva um algoritmo que leia 2 valores inteiros X e Y calcule a soma dos números que não são múltiplos de 13 entre X e Y, incluindo ambos.
Entrada

O arquivo de entrada contém 2 valores inteiros quaisquer, não necessariamente em ordem crescente.
Saída

Imprima a soma de todos os valores não divisíveis por 13 entre os dois valores lidos na entrada, inclusive ambos se for o caso.
*/

#include <iostream>
#include <string>

using namespace std;

class Multiply{
    
    public: bool isCrescent(int x, int y){
        if(y >= x)
            return true;
        return false;
    }
    
    public: bool isMultipleOfThirteen(int x){
        if((x % 13) == 0)
            return true;
        return false;
    } 
    
};

int main()
{
	int x, y;
    int sum = 0;
    Multiply mult;
    
    cin >> x;
    cin >> y;
    
    if(! mult.isCrescent(x, y)){
        int help;
        help = x;
        x = y;
        y = help;
    }
    
    for(int i = x; i <= y; i++){
        if(! mult.isMultipleOfThirteen(i))
            sum += i;
    }
    
    cout << sum << endl;
    
	return 0;
}
