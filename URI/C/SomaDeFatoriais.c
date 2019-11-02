#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

typedef enum Bool {
    true = 1, false = 0
} bool;

ulli fat[21];

int main(void){
    fat[0] = 1;
    for (int i = 1; i < 21; i++)
    {
        fat[i] = i*fat[i-1];
    }

    int a, b;
    while (scanf("%d", &a) != EOF)
    {
        scanf("%d", &b);
        printf("%lld\n", fat[a]+fat[b]);
    }
    return 0;
}