#include <stdio.h>
int main() {
    int n, linhas, num = 1;
    scanf("%d", &n);
    for (linhas = 0; linhas < n; linhas++)
    {
        for (int i = num; i < num+3; i++)
        {
            printf("%d ", i);
        }
        printf("PUM\n");
        num+=4;
    }
    
    return 0;
}