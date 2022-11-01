#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int main(void) {
    int guess;
    int maxGuesses;
    time_t t;

    srand((unsigned) time(&t));
    int number = rand()%21;

    printf("Welcome to game\n");
    printf("%d\n", number);
    printf("Enter your guess between 1-20\n");
    for(maxGuesses=5; maxGuesses>>0; --maxGuesses){
        printf("%d Guesses Left\n", maxGuesses);
        scanf("%d",&guess);
        
        if (guess==number){
            printf("Correct! Congratulations you won");
            break;
        }
       
        else if(guess<0 || guess>20) {
            printf("please enter appropriate number\n");
        } 
        
        else if (guess>number){
                printf("Number is lesser than guess\n");
       }
       
        else if (guess<number){
                printf("Number is greater than guess\n");
        }
    }   
        // printf("better luck next timne\n");
    

	return 0;
}
