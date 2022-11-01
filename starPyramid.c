/******************************************************************************
Star Pyramid
*******************************************************************************/

#include <stdio.h>

int main()
{
    int N, i=1, spaces=1, stars=1;
    scanf("%d",&N);
    while(i<=N){
        spaces=1;
        while(spaces<=N-i){
            printf(" ");
            spaces=spaces+1;
        }
    
        
        stars=1;
        while(stars<=2*i-1){
            printf("*");
            stars= stars+1;
        }
        
        spaces=1;
        while(spaces<=N-i){
            printf(" ");
            spaces=spaces+1;
        }
        
        printf("\n");
        i=i+1;
    }
    return 0;
}
