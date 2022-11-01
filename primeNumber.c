/*To print Prime Numbers*/
#include <stdio.h>

int main(void) {
	int prime[100]={0}, counter=2;
    prime[0]=2;
    prime[1]=3;
    
    for(int x = 5; x <= 100; ++x){
        for(int i = 2; i <= x; ++i){
            if (x == i){
                prime[counter] = x;
                counter = ++counter;
            }
            if (x % i == 0){
                break;
            }
        }
    }
    // To display the results
    for(counter=0; counter<100; ++counter){
        if(prime[counter])
            printf("%d\n", prime[counter]);
    }
    return 0;
}
