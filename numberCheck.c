 /* To check a number to be positive negative or zero*/
 #include <stdio.h>

int main(){
	float x;

	printf ("Please enter a number:");
	scanf ("%f",&x);
	printf ("\n");
	if (x>0) {
		printf("This is a Positive Number.");
	} else if (x==0) {
		printf("The number is Zero.");
	} else if (x<0) {
		printf("This is a Negative Number.");
	} else {
		printf("There is an unexpected error.");
	}
	return 0;
}