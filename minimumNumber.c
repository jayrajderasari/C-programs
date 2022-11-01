/******************************************************************************
Print minimum number
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define min(a,b) (((a) < (b)) ? (a):(b))
int main()
{
    int n1, n2, minNo;
    printf("Enter a number 1:");
    scanf("%d", &n1);
    printf("Enter a number 2:");
    scanf("%d", &n2);
    // n = min(5, 10);
    minNo = (n1<n2) ? n1 : n2;
    printf("Minimmum Number is %d", minNo);
    
    return 0;
}
