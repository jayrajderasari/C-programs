/*To check if it is a leap year*/
#include <stdio.h>

int main(void) {
	int year, x;

	printf("Enter a year");
	scanf("%d", &year);
	printf("\n");
	x= year%4;

	switch(x){
		case 0: 
			printf("This is a leap year");
			break;
		default:
			printf("This is not a leap year");
	}
	return 0;
}

