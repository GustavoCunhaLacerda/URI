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
    char alf[28];
    while (scanf( "%[^\n]s" , alf) != EOF)
    {
        getchar();
        int n, num;
        scanf("%d", &n);
        while(n --> 0)
        {
            scanf("%d", &num);
            getchar();
            printf("%c", alf[num-1]);
        }
        putchar('\n');
    }
    return 0;
}