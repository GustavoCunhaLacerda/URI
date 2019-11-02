#include <stdio.h>

int main() {
    int esq, dir, aux, soma;
    while (1)
    {
        scanf("%d %d", &esq, &dir);
        if (esq <= 0 || dir <= 0)
        {
            break;
        }
        if (esq>dir)
        {
            aux = dir;
            dir = esq;
            esq = aux;
        }
        soma=0;
        for (int i = esq; i <= dir; i++)
        {
            printf("%d ", i);
            soma+=i;
        }
        printf("Sum=%d\n", soma);
        
    }
    return 0;
}