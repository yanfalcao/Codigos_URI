/*1042
	
	Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.
	
	Entrada

	A entrada contem três números inteiros.
	
	Saída

	Imprima a saída conforme foi especificado.

*/
#include<stdio.h>

int main(){
	
	int begin[3], sort[3];  
	int helper;
	
	int x, y, z;
	
	scanf("%d %d %d", &begin[0], &begin[1], &begin[2]);
		sort[x] = begin[x];
	
	for(x=0; x<3; x++)
		sort[x] = begin[x];
	
	for(z=0; z<3 ; z++){
		for(x=0, y=1; y<3 ; x++, y++)
			if(sort[x] > sort[y]){
				helper = sort[x];
				sort[x] = sort[y];
				sort[y] = helper;
			}
	}
	
	for(x=0; x<3; x++)
		printf("%d\n", sort[x]);
	
	printf("\n");
	
	for(x=0; x<3; x++)
		printf("%d\n", begin[x]);	
}
