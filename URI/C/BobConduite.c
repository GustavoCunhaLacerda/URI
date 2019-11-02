#include <stdio.h>
#include <stdlib.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

int main(void){
    int r1, r2, t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &r1, &r2);
        printf("%d\n", r1+r2);
    }
    
    return 0;
}