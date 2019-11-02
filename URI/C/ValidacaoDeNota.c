#include <stdio.h>

int main() {
    float media = 0, nota;
    while (1)
    {
        scanf("%f", &nota);
        if (nota < 0 || nota > 10) puts("nota invalida");
        else
        {
            if(media != 0){
                media+=nota;
                break;
            }
            else
            {
                media+=nota;
            }
        }
    }
    printf("media = %.2f\n", media/2.0);
    return 0;
}