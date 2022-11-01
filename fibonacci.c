/******************************************************************************
Fibonacci Series
*******************************************************************************/

#include <stdio.h>

int main()
{
    int x=0, y=1, nterm, n;
    printf("Enter number N:");
    scanf("%d", &n);
    printf("%d %d",x,y);
    for(int i=1; i<=n-2; i++){
        nterm = x + y;
        printf(" %d", nterm);
        x=y;
        y=nterm;
    }


    return 0;
}
