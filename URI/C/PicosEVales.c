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
    int v[100], n, pad = true;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    for (int i = 1; i < n-1; i++)
    {
        if (v[i] <= v[i-1] && v[i] >= v[i+1])
        {
            pad = false;
        }
        if (v[i] >= v[i-1] && v[i] <= v[i+1])
        {
            pad = false;
        }
    }  
    if (n == 2 && v[1] == v[0])
    {
        pad = false;
    }
    
    printf("%d\n", pad);
    
    return 0;
}