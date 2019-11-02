#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

int main(void){
    ulli lado, comp;
    scanf("%lld %lld", &lado, &comp);
    printf("%lld\n", lado*comp);
    return 0;
}