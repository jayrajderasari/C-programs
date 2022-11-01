
#include <stdio.h>

int main(void) {
	int i=1, N, noStar=1;
	scanf("%d", &N);
	while(i<=N){
		for(noStar=1; noStar<=i; noStar++){
		    printf("S");
		}
		i=i+1;
		printf("\n");
	}
	return 0;
}

