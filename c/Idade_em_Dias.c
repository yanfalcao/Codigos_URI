// 1020

#include<stdio.h>

main() {
	
	int dia, mes=0, ano=0;
	
	scanf("%d", &dia);
	
	ano = dia/365;
	
	dia = dia-ano * 365;
	
	mes = dia/30;
	
	dia = dia-mes * 30;
	
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);

}
