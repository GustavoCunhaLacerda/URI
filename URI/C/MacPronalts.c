#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;
#define true 1
#define false 0

int main(void){
    int n, etiqueta, qte;
    float preco = 0.0;
    scanf("%d", &n);
    while (n --> 0)
    {
        scanf("%d %d", &etiqueta, &qte);
        switch (etiqueta)
        {
        case 1001:
            preco+=qte*1.5;
            break;
        case 1002:
            preco+=qte*2.5;
            break;
        case 1003:
            preco+=qte*3.5;
            break;
        case 1004:
            preco+=qte*4.5;
            break;
        case 1005:
            preco+=qte*5.5;
            break;
        
        default:
            break;
        }
    }
    printf("%.2f\n", preco);
    
    return 0;
}