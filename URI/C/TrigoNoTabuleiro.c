#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

typedef enum Bool {
    true = 1, false = 0
} bool;
ulli expo[65];
int main(void){
    expo[0] = 1;
    for (int i = 1; i < 65; i++)
    {
        expo[i] = 2*expo[i-1];
    }
    ulli gramas;
    int n, num;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        gramas = expo[num] / 12;
        if (num == 64)
        {
            puts("\"1537228672809129 kg\"");
        }
        else
        {
            printf("\"%lld kg\", ", gramas/1000);
        }
        
        
    }
    return 0;
}