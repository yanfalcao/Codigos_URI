/*
	Leia um valor inteiro X (1 <= X <= 1000). 
	Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X, se for o caso.
*/
#include<stdio.h>

int main(){
	
	int valor;
	int x;
	
	scanf("%d", &valor);
	
	if(valor >= 1 && valor <= 1000){
		for(x=1; x%2 == valor%2, x<=valor; x += 2){
			printf("%d\n", x);
		}
	}
}
