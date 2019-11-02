#include <stdio.h>

int main() {
    while(1)
    {
        int num, qte = 5, sum = 0;
        scanf("%d", &num);
        if (num == 0) goto END;
        for (int j = num; qte > 0; j++)
        {
            if (j%2 == 0)
            {
                sum += j;
                qte--;
            }
        }
        printf("%d\n", sum);
    }
    END:
 
    return 0;
}