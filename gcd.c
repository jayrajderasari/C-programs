/******************************************************************************
Print HCF or GCD of given no
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define min(a,b) (((a) < (b)) ? (a):(b))
int main()
{
    int n1, n2, hcf, n=0;
    printf("Enter a number 1:");
    scanf("%d", &n1);
    printf("Enter a number 2:");
    scanf("%d", &n2);
    // n = min(5, 10);
    n = (n1<n2) ? n1 : n2;
    for(int i=1; i<=n; ++i)
    hcf=i;
    
    printf("HCF:%d", hcf);
    
    return 0;
}
