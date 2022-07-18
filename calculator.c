
#include <stdio.h>

int main() {
	int operator; 
	int x, y, result;

	printf("1.Addition 2.Subtraction 3.Multiplication 4.Division 5.Modulus");
	scanf("%d",&operator);
	printf("\nEnter Value 1");
	scanf("%d",&x);
	printf("\nEnter Value 2");
	scanf("%d",&y);
	printf("\n");
	if (operator==1) {
		result = x+y;
		printf ("Addition=%d" ,result);
	} else if (operator==2) {
		result = x-y;
		printf ("Subtraction=%d" ,result);
	} else if (operator==3) {
		result = x*y;
		printf ("Multiplication=%d" ,result);
	} else if (operator==4) {
		result = x/y;
		printf ("Division=%d" ,result);
	} else if (operator==5) {
		result = x%y;
		printf ("Modulus=%d" ,result);
	} else {
		printf("Unexpected Error");
	}

	return 0;
	
}

