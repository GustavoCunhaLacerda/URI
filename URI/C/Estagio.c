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
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int k, n1, n2;
        float nomi = 0, deno = 0;
        while (n --> 0)
        {
            scanf("%d %d", &n1, &n2);
            // showf(nomi);
            // showf(deno);
            nomi += (n1*n2);
            deno += n2;
        }
        deno *= 100;
        printf("%.4f\n", nomi/deno);
        
    }
    
    return 0;
}