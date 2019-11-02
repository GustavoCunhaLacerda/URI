#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;
#define true 1
#define false 0

typedef struct infos_fazenda
{
    long long int carneiros;
    int visitada;
} fazenda;


int main(void){
    long long int carneiros_t = 0, n, farms_afetadas = 0;
    scanf("%lld", &n);
    fazenda farm[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &farm[i].carneiros);
        carneiros_t += farm[i].carneiros;
        farm[i].visitada = 0;
    }
    int indice = 0, prox_indice = 0;
    while (indice != -1 && indice != n)
    {
        // printf("estrela = %d %d\n", indice+1, farm[indice].visitada);
        if (farm[indice].carneiros%2 == 0){
            prox_indice--;
        }
        else
        {
            prox_indice++;
        }

        if (farm[indice].carneiros > 0)
        {
            farm[indice].carneiros--;
            carneiros_t--;
        }

        if (farm[indice].visitada == false)
        {
            farm[indice].visitada = true;
            farms_afetadas++;
        }
        indice = prox_indice;

    }
    
    printf("%lld %lld\n", farms_afetadas ,carneiros_t);
    
    return 0;
}