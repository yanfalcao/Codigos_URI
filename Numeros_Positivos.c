/*1060
	Faça um programa que leia 6 valores. 
	Estes valores serão somente negativos ou positivos (desconsidere os valores nulos). 
	A seguir, mostre a quantidade de valores positivos digitados.
*/

#include<stdio.h>

int main(){
	
	float value[6];
	int x, positive=0;
	
	for(x=0; x<6; x++){
		scanf("%f", &value[x]);
	}
	
	for(x=0; x<6; x++){
		if(value[x] > 0){
			positive ++;
		}
	}
	
	printf("%d valores positivos\n", positive);
}
