/*
No tabuleiro de xadrez, a casa na linha 1, coluna 1 (canto superior esquerdo) é sempre branca e as cores das casas se alternam entre branca e preta, de acordo com o padrão conhecido como... xadrez! Dessa forma, como o tabuleiro tradicional tem oito linhas e oito colunas, a casa na linha 8, coluna 8 (canto inferior direito) será também branca. Neste problema, entretanto, queremos saber a cor da casa no canto inferior direito de um tabuleiro com dimensões quaisquer: L linhas e C colunas. No exemplo da figura, para L = 6 e C = 9, a casa no canto inferior direito será preta!

Entrada
A primeira linha da entrada contém um inteiro L (1 ≤ L ≤ 1000) indicando o número de linhas do tabuleiro. A segunda linha da entrada contém um inteiro C (1 ≤ C ≤ 1000) representando o número de colunas.

Saída
Imprima uma linha na saída. A linha deve conter um inteiro, representando a cor da casa no canto inferior direito do tabuleiro: 1, se for branca; e 0, se for preta.
*/

#include <iostream>
#include <string>
using namespace std;

class Helper{
    
    public: bool verify(int l, int c){
        if(l >= 1 && l<= 1000 && c >= 1 && c <= 1000)
            return true;
        return false;
    } 
    
    public: bool isBlackTheFirst(int n){
        
        if(n%2 == 0)
            return true;
        return false;
    }
    
};

int main()
{
	int l, c;
    bool linha, coluna;
    Helper help;
    
    cin >> l;
    cin >> c;
    
    if(! help.verify(l, c))
        return 0;
    
    linha = help.isBlackTheFirst(l);
    coluna = help.isBlackTheFirst(c);
    
    if(linha == coluna)
        cout << "1" << endl;
    else
        cout << "0" << endl;
    
	return 0;
}
