
#include <stdio.h>

int main() {
	int x, y;
	printf ("Enter a number");
	scanf("%d" ,&x);
	printf("\n");

	y = x%2;

	if(y==0) {
		printf ("It is an even number");
	} else if(y==1) {
		printf("It is an odd number");
	} else {
		printf ("Unexpected error");
	}
	
	return 0;
	
}

