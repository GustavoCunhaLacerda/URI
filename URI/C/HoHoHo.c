#include <stdio.h>
#include <stdlib.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

int main(void){
    ulli n;
    scanf("%lld",  &n);
    for (int i = 0; i < n; i++)
    {
        printf("Ho");
        if (i == n-1) printf("!\n");
        else printf(" ");
        
    }
    
    return 0;
}