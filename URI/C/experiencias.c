#include <stdio.h>

int main()
{
    int n;
    int coelhos=0, ratos=0, sapos=0, cobaias=0, aux;
    float percentual;
    char identificador;

    scanf("%d", &n);
    int i=0;
    while(i<n)
    {
        scanf("%d %c", &aux, &identificador);
        getchar();

        if (identificador == 'C') coelhos+=aux;
        else if (identificador == 'R') ratos+=aux;
        else sapos+=aux;
        
        cobaias+=aux;
        i++;
    }
    printf("Total: %d cobaias\n", cobaias);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);

    printf("Percentual de coelhos: %.2f %%\n", (float)coelhos/(float)cobaias *100);
    printf("Percentual de ratos: %.2f %%\n", (float)ratos/(float)cobaias *100);
    printf("Percentual de sapos: %.2f %%\n", (float)sapos/(float)cobaias *100);
    
    return 0;
}
