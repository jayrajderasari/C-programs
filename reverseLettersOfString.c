/******************************************************************************
To Reverse The Entered Data In String
*******************************************************************************/

// Reverse using one string
#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char string[100];
    printf("Enter data");
    scanf("%s", string);
    
    i = strlen(string) - 1;
    for(int j=0; j<=i; j++){
    printf("%c", string[i-j]);
    }
    return 0;
}

// Reverse using two strings
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int i;
//     char string[100];
//     char stringNew[100];
//     printf("Enter data");
//     scanf("%s", string);
    
//     i = strlen(string) - 1;
//     for(int j=0; j<=i; j++){
//         stringNew[j] = string[i-j];
//     }
//     printf("%s", stringNew);
//     return 0;
// }