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
    int nota;
    scanf("%d", &nota);
    if (nota == 0)
    {
        putchar('E');
    }
    else if (nota >0 && nota < 36)
    {
        putchar('D');
    }
    else if (nota > 35 && nota < 61)
    {
        putchar('C');
    }
    else if (nota > 60 && nota < 86)
    {
        putchar('B');
    }
    else if (nota > 85 && nota < 101)
    {
        putchar('A');
    }
    putchar('\n');
    
     
    return 0;
}