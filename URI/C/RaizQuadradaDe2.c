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
    double ans = 2;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("%.10lf\n", 1.0);
    }
    else
    {
        while (n --> 1)
        {
            ans= 2 + 1.0/ans;
        }
        printf("%.10lf\n", 1 + 1/ans);
    }
    return 0;
}