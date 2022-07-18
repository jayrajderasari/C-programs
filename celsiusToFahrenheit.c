/*To convert Celsius to Fahrenheit and vice versa*/
#include <stdio.h>

int main() {
	float x, y, result;

	printf("1.Celsius to Fahrenheit 2.Fahrenheit to Celsius");
	scanf("%f", &x); //operation

	printf("\nEnter value");
	scanf("%f", &y); //value
	printf("\n");
	if(x==1){
		result=(y*9/5)+32;
		printf("Fahrenheit = %0.2f", result);
	} else if(x==2){
		result=(y-32)*5/9;
		printf("Celsius = %0.2f", result);
	}else {
		printf("Unexpected error");
	}

	return 0;
}

