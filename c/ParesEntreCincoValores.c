/*1065
	Faça um programa que leia 5 valores inteiros. 
	Conte quantos destes valores digitados são pares e mostre esta informação.
*/
int main(){
	
	int value[5];
	int par=0;
	
	int x;
	for(x=0; x<5; x++)
		scanf("%d", &value[x]);
	
	for(x=0; x<5; x++){
		if(value[x]%2 == 0)
			par++;
	}
	
	printf("%d valores pares\n", par);
	return 0;	
}
