#include <stdio.h>
#include <stdlib.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

int main(void){
    int *n, x;
    n = malloc(10*sizeof(int));
    scanf("%d", &x);
    n[0] = x;
    printf("N[0] = %d\n", n[0]);
    for (int i = 1; i < 10; i++)
    {
        n[i] = 2*n[i-1];
        printf("N[%d] = %d\n", i, n[i]);
    }
    
    return 0;
}