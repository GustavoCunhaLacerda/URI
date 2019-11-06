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
    long int qte, id;
    while (scanf("%ld %ld", &qte, &id) != EOF)
    {
        long int aux1, aux2, jogatinas = 0;
        while (qte --> 0)
        {
            scanf("%ld %ld", &aux1, &aux2);
            if (aux1 == id && aux2 == 0)
            {
                jogatinas++;
            }
        }
        printf("%ld\n", jogatinas);
        
    }
    
    return 0;
}