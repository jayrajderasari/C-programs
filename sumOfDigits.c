/******************************************************************************
Print sum of digits of a number
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, remain=0, sum=0;
    printf("Enter a number");
    scanf("%d", &n);
    while(n!=0){
        remain = n%10;
        sum = sum + remain;
        n = n/10;
    }
    printf("%d", sum);
    
    return 0;
}
