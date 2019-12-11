/*1019
	Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica,
	e informe-o expresso no formato horas:minutos:segundos.
*/

#include<stdio.h>

main() {
	int segundos, minutos=0, horas=0;
	
	scanf("%d", &segundos);
	
	minutos = segundos/60;
	segundos = segundos - minutos*60;
	
	horas = minutos/60;
	minutos = minutos - horas*60;
	
	printf("%d:%d:%d", horas, minutos, segundos);

}
