#include <stdio.h>

int main()
{
    int t[4], res;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &t[i]);
        // printf("%d\n", t[i]);
    }

    res = (t[0] - 1) + (t[1] - 1) + (t[2] - 1) + (t[3]);
    printf("%d\n", res);

    return 0;
}