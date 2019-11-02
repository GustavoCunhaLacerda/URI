#include <stdio.h>
#include <stdlib.h>
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
    int n, vencedor;
    char jogador1[100];
    char jogador2[100];
    scanf("%d", &n);
    getchar();
    while (n --> 0)
    {
        fgets(jogador1, 100, stdin);
        fgets(jogador2, 100, stdin);
        if (jogador1[2] == jogador2[2] )
        {
            if (jogador1[2] == 'p')
            {
                printf("Ambos venceram\n");
            }
            if (jogador1[2] == 'a')
            {
                printf("Aniquilacao mutua\n");
            }
            if (jogador1[2] == 'd')
            {
                printf("Sem ganhador\n");
            }
        }
        else
        {
            if (jogador1[2] == 'a')
            {
                printf("Jogador 1 venceu\n");
            }
            else if(jogador2[2] == 'a')
            {
                printf("Jogador 2 venceu\n");               
            }
            else if (jogador1[2] == 'd' && jogador2[2] == 'p')
            {
                printf("Jogador 1 venceu\n");
            }
            else if (jogador1[2] == 'p' && jogador2[2] == 'd')
            {
                printf("Jogador 2 venceu\n");
            }            
        }
    }
    return 0;
}