#include<stdio.h>

int main(){
	int x, y;
	
	scanf("%d", &x);
	scanf("%d", &y);
	
	int soma=0;
	
	if(x == y){
		printf("%d\n", soma);
		return 0;
	}
	else if(x > y){
		int i;
		for(i=x-1; i>y; i--){
			if(i%2 != 0){
				soma += i;
				//printf("\nsoma %d", soma);
			}
				
		}
	}
	else
	{
		int j;
		for(j=x+1; j<y; j++){
			if(j%2 != 0){
				soma += j;
				//printf("\nsoma %d", soma);
			}
				
		}
	}
	printf("%d\n", soma);
	
}
