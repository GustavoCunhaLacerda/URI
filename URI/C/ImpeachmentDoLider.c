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
        int votos = 0, aux;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &aux);
            votos+=aux;
        }
        if (votos >= n*2.0/3.0 ) {
            printf("impeachment\n");
        } else {
            printf("acusacao arquivada\n");
        }
    }
    
    return 0;
}