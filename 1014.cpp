/*QUESTAO
	Calcule o consumo m�dio de um autom�vel 
	sendo fornecidos a dist�ncia total percorrida (em Km)
	e o total de combust�vel gasto (em litros).
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
