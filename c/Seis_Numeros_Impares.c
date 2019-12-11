/*1070
	Leia um valor inteiro X. 
	Em seguida apresente os 6 valores ímpares consecutivos a partir de X, 
	um valor por linha, inclusive o X ser for o caso.
*/
#include<stdio.h>

int main(){
	
	int value;
	
	scanf("%d", &value);
	
	if(value%2 == 0)
		value++;
	
	int x, y;
	for(x=value, y=0; y<6; x += 2, y++)
		printf("%d\n", x);
		
}
