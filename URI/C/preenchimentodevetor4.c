#include <stdio.h>
#include <stdlib.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

int main(void){
    int *par=malloc(5*sizeof(int)), *impar=malloc(5*sizeof(int));
    int qtePar = 0, qteImpar = 0;
    int aux;
    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &aux);
        if (aux%2 == 0)
        {
            par[qtePar] = aux;
            qtePar++;
            if (qtePar == 5)
            {
                for (int x = 0; x < 5; x++)
                {
                    printf("par[%d] = %d\n", x, par[x]);
                }
                qtePar = 0;
            }
        }
        else
        {
            impar[qteImpar] = aux;
            qteImpar++;
            if (qteImpar == 5)
            {
                for (int x = 0; x < 5; x++)
                {
                    printf("impar[%d] = %d\n", x, impar[x]);
                }
                qteImpar = 0;
            }
        }
    }
    for (int i = 0; i < qteImpar; i++)
    {
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    for (int i = 0; i < qtePar; i++)
    {
        printf("par[%d] = %d\n", i, par[i]);
    }
    

    return 0;
}