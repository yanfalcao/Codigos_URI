/*
O seu professor de programação gostaria de fazer uma tela com as seguintes características:

    Ter 39 traços (-) na primeira linha;
    Ter uma | embaixo do primeiro traço e do trigésimo nono traço da primeira linha, embaixo do 10 traço deve começar a escrever a palavra "Roberto" e o restante preencher no meio com espaço em branco;
    Ter uma | embaixo do primeiro traço e do trigésimo nono traço da primeira linha, preencher no meio com espaço em branco;
    Ter uma | embaixo do primeiro traço e do trigésimo nono traço da primeira linha, embaixo do 10 traço deve começar a escrever o número "5786" e o restante preencher no meio com espaço em branco;
    Repita o procedimento 3;
    Ter uma | embaixo do primeiro traço e do trigésimo nono traço da primeira linha, embaixo do 10 traço deve começar a escrever a palavra "UNIFEI" e o restante preencher no meio com espaço em branco;
    Repita o procedimento 1.

No final deve ficar igual a imagem a seguir:

--------------------------------------- (39 traços)
|        Roberto                      |
|                                     |
|        5786                         |
|                                     |
|        UNIFEI                       |
--------------------------------------- (39 traços)
Entrada
Não há.

Saída
A saída será impresso conforme a figura acima.
*/

#include <iostream>
#include <string>
using namespace std;

class Helper{
    
    public: void display(){
        for(int i = 0; i < 39; i++)
            cout << "-";
        cout << endl;    
    }
    
    public: void displayMedium(string nome){
        for(int i = 1; i <= 39; i++){
            if(i==1 || i==39)
                cout << "|";
            else if(i == 10){
                cout << nome;
                i += nome.size() - 1;
            }
            else
                cout << " ";
        }
        cout << endl;
    }
    
    public: void displayMedium(){
        for(int i = 1; i <= 39; i++){
            if(i==1 || i==39)
                cout << "|";
            else
                cout << " ";
        }
        cout << endl;
    }
};

int main()
{
	Helper help;

    help.display();
    
    for(int i = 1; i <= 5; i++){
        if(i == 1)
            help.displayMedium("Roberto");
        else if(i == 3)
            help.displayMedium("5786");
        else if(i == 5)
            help.displayMedium("UNIFEI");
        else
            help.displayMedium();
    }
    
    help.display();
    
	return 0;
}
