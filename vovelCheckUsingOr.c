
#include <stdio.h>
#include <ctype.h>
int main() {
	char x;
    printf("Enter a letter:");
    scanf("%c", &x);
    x= tolower(x);
    printf("\n%c",x);
	printf("\n");

	if ( (x=='a') || (x=='e') || (x=='i') || (x=='o') || (x=='u')){
		   printf("It is a vovel");
	} else{
		   printf("It is not a vovel");
	}
	return 0;
}
