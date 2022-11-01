#include <stdio.h>

int main(void) {
	double length=1.203, breadth=1.302, area, perimeter;
	area = length*breadth;
	perimeter = 2.0*(length+breadth);
	printf("Length: %e",length);


	printf("\nBreadth: %e", breadth);

	printf("\nArea: %e", area);
	printf("\nPerimeter: %e", perimeter);

	return 0;
}

