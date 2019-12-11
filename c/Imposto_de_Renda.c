/*1051
     Leia um valor com duas casas decimais, equivalente ao salário de uma pessoa de Lisarb. 
      Em seguida, calcule e mostre o valor que esta pessoa deve pagar de Imposto de Renda, segundo a tabela abaixo.

     de 0.00 a 2000.00 - isento
     de R$ 2000.01 ate R$ 3000.00
     de R$ 3000.01 ate R$ 4500.00
     acima de R$ 4500.00
     
     Lembre que, se o salário for R$ 3002.00, a taxa que incide é de 8% apenas sobre R$ 1000.00, 
      pois a faixa de salário que fica de R$ 0.00 até R$ 2000.00 é isenta de Imposto de Renda.
      No exemplo fornecido (abaixo), a taxa é de 8% sobre R$ 1000.00 + 18% sobre R$ 2.00, o que resulta em R$ 80.36 no total. 
      O valor deve ser impresso com duas casas decimais.
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
 
    float salario,imposto=0;
    float auxiliar=0;
    
    scanf("%f", &salario);
    if(salario >= 0.00 && salario <= 2000.00){
        printf("Isento\n");
        system("PAUSE");
        return 0;
    }
    
    if(salario > 2000.00 || salario <= 3000.00){
         if(salario <= 3000.00)
             auxiliar = salario - 2000.00;
         else         
             auxiliar = 1000.00;

         imposto += auxiliar *0.08;
    }
    
    if(salario > 3000.00){
        if(salario > 4500.00)
             auxiliar = 1500.00; 
         else         
             auxiliar = salario - 3000.00;
             
         imposto += (auxiliar *0.18);
    }
    
    if(salario > 4500.00){
         auxiliar = salario - 4500.00;
         imposto += (auxiliar *0.28);
    }
    
    printf("R$ %.2f\n", imposto);
    system("PAUSE");
    return 0;          
}
