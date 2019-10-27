#include <stdio.h>
#include <stdlib.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

int main(void){
    double *N = malloc(100*sizeof(double));
    double x;
    scanf("%lf", &x);
    N[0] = x;
    for (int i = 1; i < 100; i++)
    {
        N[i] = N[i-1]/2.0;
    }
    for (int i = 0; i < 100; i++)
    {
        printf("N[%d] = %.4lf\n", i, N[i]);
    }
    return 0;
}