/******************************************************************************
To  calculate digits of a number
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, digits;
    printf("Enter a Number");
    scanf("%d", &num);
    digits=0;
    while(num!=0){
        num=num/10;
        digits++;
    }
    printf("%d", digits);

    return 0;
}
