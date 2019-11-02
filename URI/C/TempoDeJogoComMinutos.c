#include <stdio.h>

int main() {
    int inicioH, inicioM, fimH, fimM, durH = 0, durM = 0;
    scanf("%d %d %d %d", &inicioH, &inicioM, &fimH, &fimM);
    if (inicioH == fimH && inicioM == fimM)
    {
        durH = 24;
    }
    
    while (inicioH != fimH && inicioM != fimM)
    {
        inicioH++;
        durH++;

        if (inicioH == 24)
        {
            inicioH = 0;
        }
    }
    durM = fimM - inicioM;
    if (durM < 0)
    {
        durH--;
        durM += 60;
    }
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durH, durM);

 
    return 0;
}