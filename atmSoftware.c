/*To make a software of ATM machine*/
#include <stdio.h>

int main(void) {
	int operation, bal=10000, amount;

	printf("Enter 1.Deposit 2.Withdraw");
	scanf("%d", &operation);
	printf("\n");
	if (operation==1){
		printf("Enter Amount");
		scanf("%d", &amount);
		printf("\nDeposit Sucessful");
		bal = bal + amount;
		printf("\n");

		printf("Balance: %d", bal);
	}
	else if (operation==2){
		printf("Enter Amount");
		scanf("%d", &amount);
		printf("\n");

		if (bal>=amount){
			printf("Withdraw Sucessful");
			bal = bal - amount;
			printf("\n");
			printf("Balance: %d", bal);
		}
		else if (bal<amount){
				printf("Insufficient Balance");
				printf("\n");
				printf("Balance: %d", bal);
		}
	}
	else {
		printf("Error");
	}
	return 0;
}

