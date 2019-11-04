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
    getchar();
    double sT = 0, bT = 0, aT = 0;
    double sJ = 0, bJ = 0, aJ = 0;
    double s, b, a;
    while (n --> 0)
    {
        char nome[1000];
        fgets(nome, 1000, stdin);
        // shows(nome);
        scanf("%lf %lf %lf", &s, &b, &a);
        // showd(s);showd(b);showd(a);
        sT+=s;
        bT+=b;
        aT+=a;
        scanf("%lf %lf %lf", &s, &b, &a);
        getchar();
        // showd(s);showd(b);showd(a);
        sJ+=s;
        bJ+=b;
        aJ+=a;
    }
    // showd(sJ);
    printf("Pontos de Saque: %.2lf %%.\n", 100*sJ/sT);
    printf("Pontos de Bloqueio: %.2lf %%.\n", 100*bJ/bT);
    printf("Pontos de Ataque: %.2lf %%.\n", 100*aJ/aT);
    
    return 0;
}