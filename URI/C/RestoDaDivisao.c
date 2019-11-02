#include <stdio.h>

int main() {
    int esq, dir, aux, num;
    scanf("%d %d", &esq, &dir);
    if (esq>dir)
    {
        aux = dir;
        dir = esq;
        esq = aux;
    }
    num = esq+1;
    while (num<dir)
    {
        if (num%5 == 2 || num%5 ==3)
        {
            printf("%d\n", num);
        }
        num++;
    }

    return 0;
}