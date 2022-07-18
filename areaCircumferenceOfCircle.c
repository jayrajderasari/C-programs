 /*To find Area and Circumference of a Circle*/
#include <stdio.h>

int main() {
	float r, A, C;
	const float pi = 22/7;
	//A is area of the circle, C is circumference of circle

	printf("Enter radius of circle");
	scanf("%f", &r); //stored the value of radius as r

	A = pi*r*r, C = 2*pi*r;

	printf("\nArea: %f", A);
	printf("\nCircumference: %f", C);
	return 0;
}

