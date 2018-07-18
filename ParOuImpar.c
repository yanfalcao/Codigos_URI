#include<stdio.h>
#include<stdlib.h>

int main(){
	int N;
	int *v;
	
	scanf("%d", &N);
	
	if(N > 10000)
		return 0;
	
	v = (int*) malloc(N * sizeof(int));
	
	int i;
	
	for(i=0; i<N; i++){
		scanf("%d", &v[i]);
		
		if(v[i] <= -10000000 || v[1] >= 10000000)
			return 0;
	}

	for(i=0; i<N; i++){
		if(v[i] == 0){
			printf("NULL\n");
			continue;
		}
		
		if(v[i] %2 == 0)
			printf("EVEN ");
		else
			printf("ODD ");
		
		if(v[i] > 0)
			printf("POSITIVE\n");
		else
			printf("NEGATIVE\n");			
	}
	
	free(v);
}
