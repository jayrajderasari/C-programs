/******************************************************************************
To make a pyramid with inc and dec numbers
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, i=1, spaces, cnt=1;
    scanf("%d", &n);
    while(i<=n){
//spaces
        spaces=1;
        while(spaces<=n-i){
            printf(" ");
            spaces= spaces+1;
        }
        
//Inc No.
        cnt = 1;
        int val = i;
        while(cnt<=i){
            printf("%d", val);
            cnt = cnt + 1;
            val = val + 1;
        }
//Dec No.
        cnt = 1;
        val = val-2;
        while(cnt<=i-1){
            printf("%d", val);
            cnt = cnt + 1;
            val = val - 1;
        }
//spaces
        spaces=1;
        while(spaces<=n-i){
            printf(" ");
            spaces = spaces+1;
        }
        
        printf("\n");
        i = i + 1;
    }
    return 0;
}
