/*QUESTAO
	Leia um valor inteiro, que � o tempo de dura��o em segundos de um determinado evento em uma f�brica,
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
