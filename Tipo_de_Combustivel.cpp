/*
Um Posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes. Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma: 1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a 4) deve ser solicitado um novo código (até que seja válido). O programa será encerrado quando o código informado for o número 4.

Entrada
A entrada contém apenas valores inteiros e positivos.

Saída
Deve ser escrito a mensagem: "MUITO OBRIGADO" e a quantidade de clientes que abasteceram cada tipo de combustível, conforme exemplo.
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int num;
    int alcool=0, gasolina=0, disel=0;
    
    cin >> num;
    
    while(num != 4){
        if(num == 1){
            ++alcool;
            cin >> num;
        }else if(num == 2){
            ++gasolina;
            cin >> num;
        }else if(num == 3){
            ++disel;
            cin >> num;
        }else{
            cin >> num;
        }    
    }
    
    cout << "MUITO OBRIGADO\n"
         << "Alcool: " << alcool << "\n"
         << "Gasolina: " << gasolina << "\n"
         << "Diesel: " << disel << endl;
    
    return 0;
}
