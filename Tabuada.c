#include<stdio.h>

int main(){
	int N;
	
	scanf("%d", &N);
	
	if(N <= 2 || N >= 1000)
		return 0;
	
	int i;
	for(i=1; i<=10; i++){
		printf("%d x %d = %d\n", i, N, (N*i));
	}	
}
