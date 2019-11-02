#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int num, qte, sum = 0;
        scanf("%d %d", &num, &qte);
        for (int j = num; qte > 0; j++)
        {
            if (j%2 != 0)
            {
                sum += j;
                qte--;
            }
        }
        printf("%d\n", sum);
    }
 
    return 0;
}