#include <stdio.h>

int main() {
    int inicio, fim, dur = 0;
    scanf("%d %d", &inicio, &fim);
    if (inicio == fim)
    {
        dur = 24;
    }
    
    while (inicio != fim)
    {
        inicio++;
        dur++;
        if (inicio == 24)
        {
            inicio = 0;
        }
    }
    printf("O JOGO DUROU %d HORA(S)\n", dur);

 
    return 0;
}