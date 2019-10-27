#include <stdio.h>
typedef int uli;

int main() {
    uli PA, PB;
    double GA, GB;
    int n, i;
    scanf("%d", &n);
    for (int a = 0; a < n; a++)
    {
        scanf("%d %d %lf %lf", &PA, &PB, &GA, &GB);
        // printf("%d vs %d\n", PA, PB);
        for (i = 0; PA<=PB && i < 102; i++)
        {
            PA +=(double)PA*GA/100.0;
            PB +=(double)PB*GB/100.0;
            // printf("%d vs %d\n", PA, PB);
        }
        if (i>100)
        {
            puts("Mais de 1 seculo.");
        }
        else
        {
            printf("%d anos.\n", i);
        }
    }
    

    return 0;
}