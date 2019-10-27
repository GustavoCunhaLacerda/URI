#include <stdio.h>
#include <stdlib.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

int main(void){
    int n, aux, menor, pos;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &aux);
        if(aux<menor || i == 0){
            menor = aux;
            pos = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);
    
    return 0;
}