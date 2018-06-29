/*
	Leia 2 valores inteiros (A e B). 
	Após, o programa deve mostrar uma mensagem "Sao Multiplos" ou "Nao sao Multiplos", indicando se os valores lidos são múltiplos entre si.
*/
#include<stdio.h>

int main(){
	int value1, value2;
	int helper;
	
	scanf("%d %d", &value1, &value2);
	
	if(value1 > value2){
		helper = value1;
		value1 = value2;
		value2 = helper;
	}
	
	if(value2%value1 == 0)
		printf("Sao Multiplos\n");
	else
		printf("Nao sao Multiplos\n");	
}
