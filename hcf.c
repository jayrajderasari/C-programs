/*To find HCF*/
#include <stdio.h>

int hcf(int u, int v);

int main(){
    int result = 0;
    result = hcf (6,10);
    printf("The HCF of 6 & 10 is %d", result);
    return 0;
}

int hcf (int u, int v) {
    int x;
    while( v!=0 ){
        x = u % v;
        u = v;
        v = x;
    }
    return u;
}
