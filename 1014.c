/*QUESTAO
	Calcule o consumo médio de um automóvel 
	sendo fornecidos a distância total percorrida (em Km)
	e o total de combustível gasto (em litros).
*/

#include<stdio.h>
int main() {
	
	int km;
	double l, km_l;
	
	scanf("%d", &km);
	scanf("%lf", &l);
	
	km_l = km / l;
	
	printf("%.3lf km/l\n", km_l);
}
