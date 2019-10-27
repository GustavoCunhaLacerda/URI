#include <stdio.h>
#include <stdlib.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

int main(void){
    int *N = malloc(1000*sizeof(int));
    int cont, aux = 0;
    scanf("%d", &cont);
    for (int i = 0; i < 1000; i++)
    {
        N[i] = aux;
        aux++;
        if (aux == cont) aux = 0;
    }
    for (int i = 0; i < 1000; i++)
    {
        printf("N[%d] = %d\n", i, N[i]);
    }
    
     
    return 0;
}