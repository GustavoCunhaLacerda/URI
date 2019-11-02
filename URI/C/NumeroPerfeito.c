#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int num, SumDiv = 0;
        scanf("%d", &num);
        for (int div = 1; div < num; div++)
        {
            if(num%div == 0) SumDiv+=div;
        }
        if (SumDiv == num) printf("%d eh perfeito\n", num);
        else printf("%d nao eh perfeito\n", num);        
    }
    
    
    return 0;
}
