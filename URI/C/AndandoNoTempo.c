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
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b || a == c || b == c || a+b ==c || a+c == b || b+c == a) {
        puts("S");
    } else {
        puts("N");
    }
    
    return 0;
}