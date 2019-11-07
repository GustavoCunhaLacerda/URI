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
    char vet[100][100] = {
        "PROXYCITY",
        "P.Y.N.G.",
        "DNSUEY!",
        "SERVERS",
        "HOST!",
        "CRIPTONIZE",
        "OFFLINE DAY",
        "SALT",
        "ANSWER!",
        "RAR?",
        "WIFI ANTENNAS"
    };
    int n, a, b;
    scanf("%d", &n);
    while (n --> 0)
    {
        scanf("%d %d", &a, &b);
        printf("%s\n", vet[a+b]);
    }
    
    return 0;
}