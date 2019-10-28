#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

//typedef enum Bool {
//	true = 1, false = 0
//} bool;

int main(void){
    int n, dias;
    scanf("%d", &n);
    float num;
    for (int i = 0; i < n; i++)
    {
        dias = 0;
        scanf("%f", &num);
        while (num > 1.0)
        {
            num/=2.0;
            dias++;
        }
        printf("%d dias\n", dias);
    }
    return 0;
}