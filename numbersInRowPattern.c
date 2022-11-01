/******************************************************************************
Print ascending in N rows
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define min(a,b) (((a) < (b)) ? (a):(b))
int main()
{
    int n, row;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for(row=1; row<=n; ++row){
        for(int i=1; i<=row; ++i){
            printf("%d", i);
        }
        printf("\n");
    }
    
    return 0;
}
