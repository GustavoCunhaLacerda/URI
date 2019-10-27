#include <stdio.h>
int main() {
    int n, num = 1;
    scanf("%d", &n);
    while (num<=n)
    {
        printf("%d %d %d\n", num, num*num, num*num*num);
        num++;
    }
    
    return 0;
}