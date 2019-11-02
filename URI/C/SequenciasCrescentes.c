#include <stdio.h>

int main() {
    int  n;

    while(1)
    {
        scanf("%d", &n);
        if(n == 0) break;
        for (int i = 1; i <= n; i++)
        {
            printf("%d", i);
            if (i == n)
            {
                printf("\n");
            }
            else
            {
                printf(" ");
            }
        }
    }

    return 0;
}