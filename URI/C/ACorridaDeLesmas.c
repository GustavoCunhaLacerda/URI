#include <stdio.h>
#include <stdlib.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

int main(void){
    int qte;
    while (scanf("%d", &qte) != EOF)
    {
        int lesma, lesma_maior = -1;
        for (int i = 0; i < qte; i++)
        {
            scanf("%d", &lesma);
            if (lesma > lesma_maior) lesma_maior = lesma;
        }
        if(lesma_maior >= 20) puts("3");
        else if(lesma_maior >= 10) puts("2");
        else if(lesma_maior < 10) puts("1");
    }
    return 0;
}