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
    scanf("%d", &n);
    while (n --> 0)
    {
        double b, ai1, di1, ai2, di2, g1 ,g2;
        int li1, li2;
        scanf("%lf", &b);
        scanf("%lf %lf %d", &ai1, &di1, &li1); 
        scanf("%lf %lf %d", &ai2, &di2, &li2);
        
        g1 = (li1%2 == 0)? b + ((ai1 + di1)/2) : ((ai1 + di1)/2); 
        g2 = (li2%2 == 0)? b + ((ai2 + di2)/2) : ((ai2 + di2)/2);

        if (g1 > g2) {
            puts("Dabriel");
        } else if(g2 > g1) {
            puts("Guarte");
        } else {
            puts("Empate");
        }
    }
    
    return 0;
}