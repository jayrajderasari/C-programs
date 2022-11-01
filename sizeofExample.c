#include <stdio.h>

int main(void) {
	int min;
	double day, year;
	const double minsInAYear = 24*60*365;

	printf("Size of Char datatype: %d\n", sizeof(char));
	printf("Size of Short datatype: %d\n", sizeof(short));
	printf("Size of Int datatype: %d\n", sizeof(int));
	printf("Size of Float datatype: %d\n", sizeof(float));
	printf("Size of Long datatype: %d\n", sizeof(long));
	printf("Size of Long Long datatype: %d\n", sizeof(long long));
	printf("Size of Double datatype: %d\n", sizeof(double));
	printf("Size of Long Double datatype: %d\n", sizeof(long double));
	return 0;
}
