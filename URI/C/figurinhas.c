#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

typedef enum Bool {
    true = 1, false = 0
} bool;

int main(void){
    int casos;
    scanf("%d", &casos);
    for (int i = 0; i < casos; i++)
    {
        int a, b, mdc, resto, maior, menor;
        scanf("%d %d", &a, &b);
        maior = (a<b) ? a : b;
        menor = (a>b) ? a : b;

        resto = maior%menor;
        while (resto != 0)
        {
            maior = menor;
            menor = resto;
            resto = maior%menor;
        }
        mdc = menor;
        
        printf("%d\n", mdc);
    }
    return 0;
}