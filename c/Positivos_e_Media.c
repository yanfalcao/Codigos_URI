/*1064
	Leia 6 valores. 
	Em seguida, mostre quantos destes valores digitados foram positivos. 
	Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, 
	com um dígito após o ponto decimal.
*/
#include<stdio.h>

int main(){
	
	float value[6];
	float mean=0;
	int x, positive=0;
	
	for(x=0; x<6; x++){
		scanf("%f", &value[x]);
	}
	
	for(x=0; x<6; x++){
		if(value[x] > 0){
			positive ++;
			mean += value[x];
		}
	}
	mean = mean / positive;
	
	printf("%d valores positivos\n", positive);
	printf("%.1f\n", mean);
}
