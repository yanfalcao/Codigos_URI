/*QUESTAO 
	Faça um programa que leia três valores e apresente o maior dos três valores
	lidos seguido da mensagem “eh o maior”. Utilize a fórmula	
*/

#include<stdio.h>
#include<math.h>

int main() {
	int a, b, c, ab, maior;
	
	scanf("%d %d %d", &a, &b, &c);

	ab = (a+b+abs(a-b)) / 2;
	maior = (ab+c+abs(ab-c)) / 2;
	
	printf("%d eh o maior\n", maior);
		
}
