#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;
#define true 1
#define false 0

int main(void){
    int hora, minuto;
    while(scanf("%d", &hora) != EOF){
        scanf(":%d", &minuto);
        minuto+=60 + 60*hora;
        if (minuto >= 8*60)
        {
            printf("Atraso maximo: %d\n", minuto-8*60);
        }
        else
        {
            printf("Atraso maximo: 0\n");
        }
    }    
    return 0;
}