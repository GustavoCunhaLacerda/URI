#include <stdio.h>

int main() {
    float media = 0, nota;
    int novoCalc = 1;
    while (novoCalc == 1)
    {
        scanf("%f", &nota);
        if (nota < 0 || nota > 10) puts("nota invalida");
        else
        {
            if(media != 0){
                media+=nota;
                printf("media = %.2f\n", media/2.0);
            SavePoint1: 
                puts("novo calculo (1-sim 2-nao)");
                scanf("%d", &novoCalc); 
                if (novoCalc != 1 && novoCalc != 2)
                {
                    goto SavePoint1;
                }
                media = 0;
            }
            else
            {
                media+=nota;
            }
        }
    }
    
    return 0;
}