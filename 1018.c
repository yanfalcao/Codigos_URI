/*QUESTAO
	Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto.
	As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1.
	A seguir mostre o valor lido e a relação de notas necessárias.
*/

#include<stdio.h>

main()
{
	int notas;
	float valor;
	
	scanf("%f", &valor);
	
	valor = valor * 100;
	
	printf("NOTAS:\n");
	
	notas = valor / 10000;
	
	printf("%d nota(s) de R$ 100.00\n", notas);
	
	valor = valor - (notas * 10000);
	
	notas = valor / 5000;
	
	printf("%d nota(s) de R$ 50.00\n", notas);
	
	valor = valor - (notas * 5000);
	
	notas = valor / 2000;
	
	printf("%d nota(s) de R$ 20.00\n", notas);
	
	valor = valor - (notas * 2000);
	
	notas = valor / 1000;
	
	printf("%d nota(s) de R$ 10.00\n", notas);
	
	valor = valor - (notas * 1000);
	
	notas = valor / 500;
	
	printf("%d nota(s) de R$ 5.00\n", notas);
	
	valor = valor - (notas * 500);
	
	notas = valor / 200;
	
	printf("%d nota(s) de R$ 2.00\n", notas);
	
	valor = valor - (notas * 200);
	
	printf("MOEDAS:\n");
	
	notas = valor / 100;
	
	printf("%d moeda(s) de R$ 1.00\n", notas);
	
	valor = valor - (notas * 100);
	
	notas = valor / 50;
	
	printf("%d moeda(s) de R$ 0.50\n", notas);
	
	valor = valor - (notas * 50);
	
	notas = valor / 25;
	
	printf("%d moeda(s) de R$ 0.25\n", notas);
	
	valor = valor - (notas * 25);
	
	notas = valor / 10;
	
	printf("%d moeda(s) de R$ 0.10\n", notas);
	
	valor = valor - (notas * 10);
	
	notas = valor / 5;
	
	printf("%d moeda(s) de R$ 0.05\n", notas);
	
	valor = valor - (notas * 5);
	
	notas = valor/1;
	
	printf("%d moeda(s) de R$ 0.01\n", notas);
	
	valor = valor - (notas * 1);
}
