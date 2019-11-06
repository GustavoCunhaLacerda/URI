// Erro de 5%
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
    int n, m, poki, pokj, ashi, ashj;
    while(scanf("%d %d", &n, &m) != EOF) {
        int a[n][m];
        for(int linha = 0; linha < n; linha++){
            for(int coluna = 0; coluna < m; coluna++){
                scanf("%d", &a[n][m]);
                if (a[n][m] == 2)
                {
                    poki = linha;
                    pokj = coluna;
                }
                else if (a[n][m] == 1)
                {
                    ashi = linha;
                    ashj = coluna;
                }
            }
        }
        int disti = abs(poki - ashi);
        int distj = abs(pokj - ashj);

        printf("%d\n", disti+distj);
    }
    return 0;
}