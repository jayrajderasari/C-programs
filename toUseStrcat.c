/*To print full name using strcat*/

#include <stdio.h>
#include <string.h>
int main(void) {
	char fName[10]= "0";
	char lName[10]= "0";
    scanf("%s", fName);
    scanf("%s", lName);
    strncat (fName, lName, 20);
	printf("%s", fName);
	return 0;
}

