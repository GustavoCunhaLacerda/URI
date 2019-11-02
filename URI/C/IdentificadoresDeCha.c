#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// macros 
#define watchi(x) printf("%s -> %d\n", #x, x);
#define watchf(x) printf("%s -> %f\n", #x, x);
#define watchs(x) printf("%s -> %s\n", #x, x);
// typedefs
typedef unsigned int uint;
typedef long int lint;
typedef long long int llint;
typedef unsigned long long int ulli;
// bool simulation
#define true 1
#define false 0

int main(void){
    int n, aux, cont = 0;
    int x = 5;
    scanf("%d", &n);
    while (x --> 0)
    {
        scanf("%d", &aux);
        if ( aux == n )
            cont++;
    }
    printf("%d\n", cont);
    return 0;
}