#include <stdio.h>

int main() {
    int n;
    float x, y;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f %f", &x, &y);
        if(y == 0) puts("divisao impossivel");
        else
        {
            printf("%.1f\n", x/y);
        }
    }

 
    return 0;
}