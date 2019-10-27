#include <stdio.h>

int main() {
    int esq, dir, aux, soma = 0, num;
    scanf("%d %d", &esq, &dir);
    if (esq>dir)
    {
        aux = dir;
        dir = esq;
        esq = aux;
    }
    num=esq;
    while (num<=dir)
    {
        if (num%13 != 0)
        {
            soma+=num;
        }
        num++;
    }
    printf("%d\n", soma);

 
    return 0;
}