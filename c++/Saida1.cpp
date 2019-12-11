/*
O seu professor de programação gostaria de fazer uma tela com as seguintes características:

    Ter 39 traços (-) na primeira linha;
    Ter uma | embaixo do primeiro traço e do trigésimo nono traço da primeira linha, preencher no meio com espaço em branco;
    Repita o procedimento 2 mais quatro vezes;
    Repita o procedimento 1.

No final deve ficar igual a imagem a seguir:

--------------------------------------- (39 traços)

|                                     |

|                                     |

|                                     |

|                                     |

|                                     |

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
    
    public: void displayMedium(){
        for(int i = 0; i < 39; i++){
            if(i==0 || i==38)
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
    
    for(int i=0; i < 5; i++)
        help.displayMedium();
    
    help.display();
    
	return 0;
}
