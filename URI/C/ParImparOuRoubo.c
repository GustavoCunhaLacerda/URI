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
    int p, j1, j2, r, a;
    scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);
    if (r == 1 && a == 1)
    {
        printf("Jogador 2 ganha!");
    }
    else if ( (p == 1 && (j1+j2)%2 == 0) || (p == 0 && (j1+j2)%2 == 1) || (r == 1 && a == 0))
    {
        printf("Jogador 1 ganha!");
    }
    else
    {
        printf("Jogador 2 ganha!");
    }
    putchar('\n');
    
    
    return 0;
}