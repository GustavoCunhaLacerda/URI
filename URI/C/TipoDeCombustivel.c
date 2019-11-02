#include <stdio.h>

int main() {
    int alcool = 0, gasolina = 0, diesel = 0;
    int esc = -1;
    while (esc != 4)
    {
        CheckPoint: 
            scanf("%d", &esc);
        
        if (esc < 1 || esc > 4) goto CheckPoint;

        switch (esc)
        {
            case 1:
                alcool++;
                break;
            case 2:
                gasolina++;
                break;
            case 3:
                diesel++;
                break;
        }
    }
    puts("MUITO OBRIGADO");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

 
    return 0;
}