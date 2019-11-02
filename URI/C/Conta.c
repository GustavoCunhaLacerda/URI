#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int qte_s;
        scanf("%d", &qte_s);
        if ((qte_s % 2) == 1)
            printf("1\n");
        else
            printf("0\n");
    }

    return 0;
}