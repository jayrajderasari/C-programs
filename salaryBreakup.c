 /* To get salary breakup*/
 #include <stdio.h>

int main(){
	float ctc, pf, basic, hra, other;
	const float childAllowance = 2400; //Child Allowance fix of 2400Rs.

	printf("Please enter your CTC");
	scanf("%f",&ctc);

	pf = (10*ctc)/100; //10% PF of CTC
	basic = (50*ctc)/100; //50% basic of CTC
	hra = (25*ctc)/100; //25% HRA of CTC
	other = (15*ctc/100)-(childAllowance); //Remaining Amount of CTC as others

	printf("\nBasic:%f" ,basic);
	printf("\nHRA:%f" ,hra);
	printf("\nPF:%f" ,pf);
	printf("\nChild Allowance:%f" ,childAllowance);
	printf("\nOther:%f",other);

	return 0;
}