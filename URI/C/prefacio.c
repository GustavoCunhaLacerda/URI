#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

int main(void){
    int a, b, q, r;
    scanf("%d %d", &a, &b);
    r = a%b;
    if(r<0){
        if(b<0) r =  r - b;
        else r = r+b;
    }
    q = (a-r)/b;
    printf("%d %d\n", q, r); 
    return 0;
}