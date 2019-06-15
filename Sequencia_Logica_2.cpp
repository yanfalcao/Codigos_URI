/*
Escreva um programa que leia dois valores X e Y. A seguir, mostre uma sequência de 1 até Y, passando para a próxima linha a cada X números.
Entrada
O arquivo de entrada contém dois valores inteiros, (1 < X < 20) e (X < Y < 100000).

Saída
Cada sequência deve ser impressa em uma linha apenas, com 1 espaço em branco entre cada número, conforme exemplo abaixo. Não deve haver espaço em branco após o último valor da linha.
*/

#include <iostream>
#include <string>
using namespace std;

class Help{
    
    public: bool verify(int x, int y){
        if(x > 1 && x < 20){
            if(y > x && y < 100000){
                return true;
            }
        }
        return false;
    }
    
    public: void sequencia(int x, int y){
        
        for(int i = 1; i <= y; ){
            for(int j = 1; j <= x && i <= y; j++, i++){
                if(j == x)
                    cout << i;
                else
                    cout << i << " ";
            }
            cout << endl;
        }
    }
    
};

int main(){
    
    int x, y;
    Help help;
    
    cin >> x >> y;
    
    if(help.verify(x, y)){
        help.sequencia(x, y);
    }
    
    return 0;
}
