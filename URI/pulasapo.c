#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

//typedef enum Bool {
//	true = 1, false = 0
//} bool;

int main(void){
    int salto, qte, canos[1000];
    int win = 1, aux;
    scanf("%d %d", &salto, &qte);
    for (int i = 0; i < qte; i++)
    {
        scanf("%d", &canos[i]);
    }
    for (int i = 0; i < qte-1; i++)
    {
        aux = canos[i] - canos[i+1];
        if (aux < -salto || aux > salto)
        {
            win = 0;
            break;
        }
    }
    if (win == 1)
    {
        printf("YOU WIN\n");
    }
    else
    {
        printf("GAME OVER\n");
    }
    return 0;
}