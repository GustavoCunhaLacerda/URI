#include <stdio.h>
#include <stdlib.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;


void fib(ulli *vet){
    vet[0] = 0;
    vet[1] = 1;
    vet[2] = 1;
    for (int i = 3; i < 10000; i++)
    {
        vet[i] = vet[i-1] + vet[i-2];
    }
}

int main(void){
    ulli *vet = malloc(10000*sizeof(ulli));
    fib(vet);
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        ulli aux;
        scanf("%lld", &aux);
        printf("Fib(%lld) = %lld\n", aux, vet[aux]);
    }
    

    return 0;
}