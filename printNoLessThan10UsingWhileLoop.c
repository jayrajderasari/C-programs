#include <stdio.h>

int main(void) {
    int x;
    scanf("%d",&x);
    while(x=<10) {
        printf("%d\n",x);
        x = ++x;
    }
	return 0;
}

