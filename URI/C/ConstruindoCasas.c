#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

int main(void){
    int A, B, C;
    int res;
    while (1)
    {
        scanf("%d", &A);
        if (A == 0) break;
        scanf("%d %d", &B, &C);
        res = sqrt((A*B) * 100/(float)C);
        printf("%d\n", res);
    }
    
    return 0;
}