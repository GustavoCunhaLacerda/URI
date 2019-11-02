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
    int n, num, m2 = 0, m3 = 0, m4 = 0, m5 = 0;
    scanf("%d", &n);
    while (n --> 0)
    {
        scanf("%d", &num);
        if (num%2 == 0)
        {
            m2++;
        }
        if (num%3 == 0)
        {
            m3++;
        }
        if (num%4 == 0)
        {
            m4++;
        }
        if (num%5 == 0)
        {
            m5++;
        }
        
    }
    printf("%d Multiplo(s) de %d\n", m2, 2);
    printf("%d Multiplo(s) de %d\n", m3, 3);
    printf("%d Multiplo(s) de %d\n", m4, 4);
    printf("%d Multiplo(s) de %d\n", m5, 5);
    
    return 0;
}