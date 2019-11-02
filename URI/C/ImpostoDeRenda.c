#include <stdio.h>

int main()
{
    float renda, imposto = 0, res = 0; 
    scanf("%f", &renda);
    if (renda >= 2000.01 && renda <= 3000.00)
    {
        imposto = 0.08;
    }
    if (renda >= 3000.01 && renda <= 4500.00)
    {
        res = 
        imposto = 0.18;
    }
    if (renda >= 4500.00)
    {
        imposto = 0.28;
    }
    if (imposto == 0)
    {
        printf("Isento\n");
    }
    else
    {
        printf("R$ %.2f\n", res);
    }
    
    


    return 0;
}
