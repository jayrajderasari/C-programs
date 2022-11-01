
#include <stdio.h>

int main(void) {
	enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
	enum company xerox = XEROX;
	enum company google = GOOGLE;
	enum company ebay = EBAY;

	printf("%d ", XEROX);
	printf("%d ", google);
	printf("%d ", ebay);


	return 0;
}

