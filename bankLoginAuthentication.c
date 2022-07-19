
#include <stdio.h>
#include <ctype.h>

int main() {
    int status, pass;
    char id;

    printf("Is the bank open? 1.Open 2.Close");
    scanf("%d", &status);
    printf("\n");

    if (status==1){
        printf("Enter user id");
        scanf(" %c", &id);
        id = toupper(id);
        printf("\n");

        if( (id=='A') || (id=='B') || (id=='C') ){
            printf("Enter password");
            scanf("%d", &pass);
            printf("\n");

            if( (id=='A' && pass==10) || (id=='B' && pass==20) || (id=='C' && pass==30) ){
                printf("Login sucessful");
            } else{
                printf("Password is incorrect.");
            }
        }
        else{
            printf("Invalid User");
        }
    } else{
        printf("Bank is closed.");
    }
	return 0;
}


