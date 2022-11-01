#include <stdio.h>

int main(void) {
	int min;
	double day, year;
	const double minsInAYear = 24*60*365;

	printf("Enter Minutes:");
	scanf("%d", &min);
	
	day = (min/(minsInAYear)*365);
	year = min/(minsInAYear);
	
	printf("\nDays:%lf \nYears:%lf", day, year);
	return 0;
}

