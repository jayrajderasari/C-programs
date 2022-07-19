
#include <stdio.h>
#include <ctype.h>

int main() {
	char x;
    printf("Enter a letter:");
    scanf("%c", &x);
    printf("\n");
    x= tolower(x);
    printf("%c",x);
    
  switch(x){
      case 'a':
      printf("It is a vovel");
      break;
      case 'e':
      printf("It is a vovel");
      break;
      case 'i':
      printf("It is a vovel");
      break;
      case 'o':
      printf("It is a vovel");
      break;
      case 'u':
      printf("It is a vovel");
      break;
      default: 
      printf("It  is not vovel");
  }
	return 0;
}


