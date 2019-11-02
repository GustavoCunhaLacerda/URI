#include <stdio.h>

int main() {
    unsigned int fib[46], n;
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < 46; i++)
    {
        fib[i] = fib[i-1]+fib[i-2];
    }
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d", fib[i]);
        if (i == n-1) printf("\n");
        else printf(" ");
    }
    
    return 0;
}