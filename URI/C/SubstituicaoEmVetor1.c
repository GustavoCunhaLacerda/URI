#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vet;
    vet = malloc(10*sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);
        if (vet[i] < 1)
        {
            vet[i] =1;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("X[%d] = %d\n", i, vet[i]);
    }
    
    

    return 0;
}
