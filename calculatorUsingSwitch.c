/*To make a calculator using switch*/
#include <stdio.h>
int main(){
	int operator;
	float x, y, result;

	printf("1.Addition 2.Subtraction 3.Multiplication 4.Division 5.Modulus");
	scanf("%d", &operator);
	printf("\nEnter value 1");
	scanf("%f", &x);
	printf("\nEnter value 2");
	scanf("%f", &y);
	printf("\n");

	switch(operator){
		case 1:
		result = x+y;
		printf("Addition:%f", result);
		break;
		case 2:
		result = x-y;
		printf("Subtraction:%f", result);
		break;
		case 3:
		result = x*y;
		printf("Multiplication:%f", result);
		break;
		case 4:
		result = x/y;
		printf("Division:%f", result);
		break;
		case 5:
		x = (int)x;
		y = (int)y;
		result = (int)x%(int)y;
		printf("Modulus:%f", result);
		break;
		default: 
		printf("Unexpected error");
	}

	return 0;
}

