/*
O seu professor de programação gostaria de fazer uma tela com as seguintes características:

    Ter 39 traços (-) na primeira linha;
    Ter uma | embaixo do primeiro traço e do trigésimo nono traço da primeira linha, embaixo do 2o traço deve começar a escrever "x = 35" e o restante preencher com espaço em branco;
    Ter uma | embaixo do primeiro traço e do trigésimo nono traço da primeira linha, preencher no meio com espaço em branco;
    Ter uma | embaixo do primeiro traço e do trigésimo nono traço da primeira linha, embaixo do 17o traço deve começar a escrever "x = 35" e o restante preencher com espaço em branco;
    Repita o procedimento 3;
    Ter uma | embaixo do primeiro traço e do trigésimo nono traço da primeira linha, embaixo do 33o traço deve começar a escrever "x = 35" e o restante preencher no meio com espaço em branco;
    Repita o procedimento 1.

No final deve ficar igual a imagem a seguir:

--------------------------------------- (39 traços)

|x = 35                               |

|                                     |

|                x = 35               |

|                                     |

|                               x = 35|

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
    
    public: void displayMedium(string nome, int x){
        for(int i = 1; i <= 39; i++){
            if(i==1 || i==39)
                cout << "|";
            else if(i == x){
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
            help.displayMedium("x = 35", 2);
        else if(i == 3)
            help.displayMedium("x = 35", 17);
        else if(i == 5)
            help.displayMedium("x = 35", 33);
        else
            help.displayMedium();
    }
    
    help.display();
    
	return 0;
}
