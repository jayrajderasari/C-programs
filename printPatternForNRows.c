/******************************************************************************
Print pattern for N no given rows. 
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, i=1;
    printf("Enter Value of N:");
    scanf("%d", &n);
    
    while(i<=n){
        for(int x=1; x<=n-i+1; x++){
            printf("*");
        }
        printf("\n");
        i = i + 1;
    }
    return 0;
}
