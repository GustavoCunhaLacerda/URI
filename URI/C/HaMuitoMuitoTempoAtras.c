#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

//typedef enum Bool {
//	true = 1, false = 0
//} bool;

int main(void){
    int n;
    long int anos;
    scanf("%d", &n);
    while ( n --> 0)
    {
        scanf("%ld", &anos);
        anos = 2015 - anos;
        if (anos <= 0)
        {
            anos*=-1;
            anos++;
            printf("%ld A.C.\n",anos);
        }
        else
        {
            
            printf("%ld D.C.\n", anos);
        }
        
    }
    
    return 0;
}