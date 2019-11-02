#include <stdio.h>
int main()
{
    int n;
    int aux, esq, dir, soma;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &esq, &dir);
        if (esq>dir)
        {
            aux = dir;
            dir = esq;
            esq = aux;
        }
        soma = 0;
        for (int num = esq+1; num < dir; num++)
        {
            if(num%2 != 0) soma+=num; 
        }
        printf("%d\n", soma);
        
    }
    
    
    return 0;
}