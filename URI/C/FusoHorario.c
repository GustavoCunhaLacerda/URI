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
    int a, b, c, fuso;
    scanf("%d %d %d", &a, &b, &c);

    fuso = a+b+c;
    if (fuso >= 24){
        fuso-=24;
    }
    else if(fuso<0){
        fuso+=24;
    }

    printf("%d\n", fuso);
    return 0;
}