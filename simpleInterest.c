#include <stdio.h>

int main() {
	int principal, rate, time, interest;
   printf("Enter Principal Amount:");
   scanf("%d", &principal);
   printf("Enter Interest Rate:");
   scanf("%d", &rate);
   printf("Enter Time Period:");
   scanf("%d", &time);

   interest = (principal*rate*time)/100;
    printf("Interest: %d",interest);
    return 0;
}
