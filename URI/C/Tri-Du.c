#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

int main(void){
    int a, b, maior;
    scanf("%d %d", &a, &b);
    maior = (a>b) ? a : b;
    printf("%d\n", maior);
    return 0;
}