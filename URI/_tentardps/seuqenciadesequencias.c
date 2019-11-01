#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// macros 
#define watchi(x) printf("%s -> %d\n", #x, x);
#define watchf(x) printf("%s -> %f\n", #x, x);
#define watchs(x) printf("%s -> %s\n", #x, x);
// typedefs
typedef unsigned int uint;
typedef long int lint;
typedef long long int llint;
typedef unsigned long long int ulli;
// bool simulation
#define true 1
#define false 0

int main(void){
    int *vet = malloc(sizeof(int)*20102);
    int indice=1, num=1;
    vet[0] = 0;
    while (indice <= 20102)
    {
        for (int i = 0; i < num; i++)
        {
            vet[indice] = num;
            indice++;
            if (indice == 20102)
                break;
        }
        num++;
    }
    int n, i =0;
    while (scanf("%d", &num) != EOF)
    {
        num++;
        if (1 + (num)*(num-1)/2 == 1)
        {
            printf("Caso %d: %d numeros\n", i+1, 1 + (num)*(num-1)/2);
        }
        else
        {
            printf("Caso %d: %d numeros\n", i+1, 1 + (num)*(num-1)/2);
        }
        
        

        for (int j = 0; vet[j] < num; j++)
        {
            printf("%d", vet[j]);
            if (j < 1 + (num)*(num-1)/2)
            {
                putchar(' ');
            }
        }
        putchar('\n');
        putchar('\n');
        i++;
    }
    return 0;
}