#include<stdio.h>

int main(){
	int N;
	
	scanf("%d", &N);
	
	if(N <= 5 || N >= 2000)
		return 0;
	
	int i;
	for(i = 1; i <= N; i++){
		if(i %2 == 0)
			printf("%d^2 = %d\n", i, (i*i));
	}	
}
