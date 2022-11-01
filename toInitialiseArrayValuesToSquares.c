
#include <stdio.h>

int main(void) {
	int i, demo[10];
	for(i=0; i<10;  ++i){
		demo[i]=i*i;
	}
	for(i=0; i<10; ++i){
	printf("%d\n", demo[i]);
	}
	return 0;
}

