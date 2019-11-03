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
    int n, m;
    int pi=-1, pj =-1;
    int v[1000][1000];
    scanf("%d %d", &n, &m);
    for(int linha = 0; linha < n; linha++){
        for(int coluna = 0; coluna < m; coluna++){
            scanf("%d", &v[linha][coluna]);
        }
    }
    for(int linha = 1; linha < n-1; linha++){
        for(int coluna = 1; coluna < m-1; coluna++){
            if (v[linha][coluna] == 42)
            {
                if (v[linha+1][coluna] == 7 && v[linha][coluna+1] == 7 && v[linha-1][coluna] == 7 && v[linha][coluna-1] == 7)
                {
                    if (v[linha+1][coluna+1] == 7 && v[linha-1][coluna-1] == 7)
                    {
                        if (v[linha-1][coluna+1] == 7 && v[linha+1][coluna-1] == 7)
                        {
                            pi = linha;
                            pj = coluna;
                        }
                        
                    }
                    
                }
                
            }
            
        }
    }
    printf("%d %d\n", pi+1, pj+1);
    return 0;
}