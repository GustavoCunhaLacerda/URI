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
    int min, max, n;
    while (scanf("%d %d %d", &n, &min, &max) != EOF)
    {
        int qte = 0, aux;
        while (n-->0)
        {
            scanf("%d", &aux);
            if (aux >= min && aux <= max)
            {
                qte++;
            }
            
        }
        printf("%d\n", qte);
    }
    
    return 0;
}