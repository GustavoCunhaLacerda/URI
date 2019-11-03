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
    int num_aux, num, n, res = 0;
    scanf("%d", &n);
    scanf("%d", &num);
    num_aux = num;
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &num);
        if (num < num_aux)
        {
            res = i+1;
            break;
        }
        num_aux = num;
    }
    printf("%d\n", res);
    return 0;
}