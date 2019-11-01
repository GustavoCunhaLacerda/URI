#include <stdio.h>
#include <stdlib.h>
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
#define pi 3.14
int main(void){
    double v, h, d,area;
    while (scanf("%lf", &v) != EOF)
    {
        scanf("%lf", &d);
        h = (4*v)/(pi*d*d);
        area = pi*d*d/4.0;
        printf("ALTURA = %.2lf\n", h);
        printf("AREA = %.2lf\n", area);
    }
    
    
    return 0;
}