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
    int n, m;
    char str[10];
    scanf("%d %d", &n, &m);
    while (m --> 0)
    {
        scanf("%s", str);
        getchar();
        if (str[0] == 'f') 
        {
            n++;
        }
        else
        {
            n--;
        }
    }
    printf("%d\n", n);
    
    return 0;
}