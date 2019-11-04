#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
// macros 
#define showi(x) printf("%s -> %d\n", #x, x);
#define showf(x) printf("%s -> %f\n", #x, x);
#define shows(x) printf("%s -> %s\n", #x, x);
#define showd(x) printf("%s -> %lf\n", #x, x);
// typedefs
typedef unsigned int uint;
typedef long int lint;
typedef long long int llint;
typedef unsigned long long int ulli;
// bool simulation
#define true 1
#define false 0

int main(void){
    long double pat = 10000000000000000000;
    printf("%llf\n", pat);
    while (0)
    {
        scanf("%lld", &pat);
        if (pat == -1)
        {
            break;
        }
        if (pat != 0)
        {
            pat--;
        }
        printf("%lld\n", pat);
    }
    
    return 0;
}