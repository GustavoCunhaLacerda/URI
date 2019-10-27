#include <stdio.h>

int main()
{
    int n;
    char str[102];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        fgets(str, 102, stdin);
    }
    puts("Ciencia da Computacao");
    return 0;
}