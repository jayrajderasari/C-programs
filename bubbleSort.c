/******************************************************************************
Bubble sort a string
*******************************************************************************/
#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int noString;
    char str[100][100];
    char temp[50];
    
    //Asigning value to string
    printf("Input number of strings");
    scanf("%d", &noString);
    for(int i=0; i<noString; ++i){
        scanf("%s", str[i]);
    }
    //bubbleSort
    for (int i = 1; i <= noString; ++i) {
        for (int j = 0; j <= noString - i; ++j) {
          if(strcmp (str[j], str[j+1])>0){
              
            strncpy (temp, str[j], sizeof(temp) - 1);
            strncpy (str[j], str[j + 1], sizeof(str[j]) - 1);
            strncpy (str[j + 1], temp, sizeof(str[j]+1) - 1);
          }
        }
    }
    
    
//printing

    for(int x=0; x<=noString; ++x){
        printf("%s\n", str[x]);
    }
}