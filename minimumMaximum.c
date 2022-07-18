/*To identify maximum and minimum value*/
#include <stdio.h>

int main() {
	int x, y;

	printf("Please enter first value"); //first value stored as X
	scanf("%d",&x);
	printf("\nPlease enter second value"); //second value stored as Y
	scanf("%d",&y);
	printf("\n");

	if(x>y){
		printf("First value is maximum.\nSecond value is minimum.");
	} else if(x<y){
		printf("First value is minimum.\nSecond value is maximum.");
	} else if(x=y){
		printf("Both the values are equal.");
	} else{
		printf("Unexpected error.");
	}

	return 0;
}

