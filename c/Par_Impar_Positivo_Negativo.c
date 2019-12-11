/*1066
	Leia 5 valores Inteiros. 
	A seguir mostre quantos valores digitados foram pares, quantos valores digitados foram ímpares, 
	quantos valores digitados foram positivos e quantos valores digitados foram negativos.
*/
int main(){
	
	int value[5];
	int par=0, impar=0, positivo=0, negativo=0;
	
	int x;
	for(x=0; x<5; x++)
		scanf("%d", &value[x]);
	
	for(x=0; x<5; x++){
		if(value[x]%2 == 0)
			par++;
		if(value[x]%2 != 0)
			impar++;	
		if(value[x] > 0)
			positivo++;
		if(value[x] < 0)
			negativo++;		
	}
	
	printf("%d valor(es) par(es)\n", par);
	printf("%d valor(es) impar(es)\n", impar);
	printf("%d valor(es) positivo(s)\n", positivo);
	printf("%d valor(es) negativo(s)\n", negativo);
	
	return 0;	
}
