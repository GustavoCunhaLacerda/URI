#include <stdio.h>
#include <stdlib.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

int main(void){
    int *N = malloc(20*sizeof(int));   
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &N[i]);
    }
    for (int i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i, N[19-i]);
    }
    
    
    return 0;
}