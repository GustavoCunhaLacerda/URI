#include <stdio.h>

int main() {
    int x, y, sum = 0, cont = 0;
    scanf("%d", &x);
    
    Ponto1:
    scanf("%d", &y);
    if(y<=x) goto Ponto1;
    for (int i = x; sum < y; i++)
    {
        sum+=i;
        cont++;
    }

    printf("%d\n", cont);
    return 0;

}