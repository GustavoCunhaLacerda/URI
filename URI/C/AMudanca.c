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
        if ( (0 <= n && n < 90)  || n == 360)
        {
            puts("Bom Dia!!");
        }
        else if (90 <= n && n < 180)
        {
            puts("Boa Tarde!!");
        }
        else if (180 <= n && n < 270)
        {
            puts("Boa Noite!!");
        }
        else
        {
            puts("De Madrugada!!");
        }
    }
    
    return 0;
}