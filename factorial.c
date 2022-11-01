/******************************************************************************
Print Factorial of given number
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, product=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for(int i=1; i<=n; ++i){
        product = product * i;
    }
    printf("Factorial of given Number is %d", product);
    
    return 0;
}
