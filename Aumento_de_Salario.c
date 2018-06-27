//1048

#include<stdio.h>

int main(){
	float salario;
	float reajuste;
	int percentual;
	
	scanf("%f", &salario);
	
	if(salario >= 0 && salario <= 400.00)
	{
		reajuste = salario * 0.15;
		percentual = 15;
	}
	else if(salario > 400.00 && salario <= 800.00)
	{
		reajuste = salario * 0.12;
		percentual = 12;
	}
	else if(salario > 800.00 && salario <= 1200.00)
	{
		reajuste = salario * 0.10;
		percentual = 10;
	}
	else if(salario > 1200.00 && salario <= 2000.00)
	{
		reajuste = salario * 0.07;
		percentual = 7;
	}
	else
	{
		reajuste = salario * 0.04;
		percentual = 4;
	}
	
	printf("Novo salario: %.2f\n", salario+reajuste);
	printf("Reajuste ganho: %.2f\n", reajuste);
	printf("Em percentual: %d %\n", percentual);
}
