#include <stdio.h>
#include <stdlib.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

int main(void){
    float *A = malloc(100*sizeof(float));
    for (int i = 0; i < 100; i++)
    {
        scanf("%f", &A[i]);
        if(A[i] <= 10) printf("A[%d] = %.1f\n", i, A[i]);
    }
    return 0;
}