#include <stdio.h>

int main(void) {
	float hours, income, tax, gross;
	printf("Enter your working hours:");
	scanf("%f", &hours);

	if (hours>40){
		income = 18*(hours-40) + 12*40;
		tax = (300*15/100) +  (150*20/100) + ((income-450)*25/100) ;
	}

	else if (hours<=40){
		income = 12*hours;
		if (income>450){
			tax = (300*15/100) +  (150*20/100) + ((income-450)*25/100) ;
		}
		else if (income>300 && income<450) {
			tax = (300*15/100) + ((income-300)*20/100);
		}
		else if (income<300){
			tax = income*15/100;
		}
	}
		gross = income-tax;

	printf("Income:%f \nTax:%f \nGross:%f", income, tax, gross);

	return 0;
}
