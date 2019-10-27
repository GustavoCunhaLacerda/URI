#include <stdio.h>

int main() {
    int quebra, n;
    scanf("%d %d", &quebra, &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
        if (i%quebra == 0)
        {
            printf("\n");
        }
        else
        {
            printf(" ");
        }
    }

    return 0;
}