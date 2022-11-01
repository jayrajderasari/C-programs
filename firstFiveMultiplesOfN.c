/******************************************************************************
Print first 5 multiples of N
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, i=1;
    printf("Enter Value of N:");
    scanf("%d", &n);
    
    for(i; i<=5; i++){
        int product = i*n;
        printf("%d*%d=%d\n", n, i, product);
    }
    return 0;
}
