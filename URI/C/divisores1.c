#include <stdio.h>

int main() {
    unsigned int n;
    scanf("%d", &n);
    for (int i = 1; i < n+1; i++)
    {
        if (n%i == 0)
        {
            printf("%d\n", i);
        }
    }
 
    return 0;
}