/*1072	

	Leia um valor inteiro N. Este valor ser� a quantidade de valores inteiros X que ser�o lidos em seguida.
	Mostre quantos destes valores X est�o dentro do intervalo [10,20] e quantos est�o fora do intervalo,
	mostrando essas informa��es.
	
	Entrada

	A primeira linha da entrada cont�m um valor inteiro N (N < 10000), 
	que indica o n�mero de casos de teste.
	Cada caso de teste a seguir � um valor inteiro X (-107 < X <107).
 
	Sa�da

	Para cada caso, imprima quantos n�meros est�o dentro (in) e quantos valores est�o fora (out) do intervalo.

*/
#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int *values;
	int end;
	int in=0, out=0;
	
	scanf("%d", &end);
	if(end >= 10000)
		return 0;
	
	values = (int *) malloc(end *sizeof(int));
	
	int x;	
	for(x=0; x < end; x++)
		scanf("%d", &values[x]);
		
	for(x=0; x < end; x++){
		if(values[x] < -10000000 || values[x] > 10000000)
			continue;
		
		if( values[x] >= 10 && values[x] <=20)
			in++;
		else
			out++;		
	}		
	
	printf("%d in\n", in);
	printf("%d out\n", out);
	
	free(values);	
}
