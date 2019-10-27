#include <stdio.h>

int main() {
    float salario, percentual, reajuste;
    scanf("%f", &salario);
    if (salario >= 0 && salario <= 400.00)
    {
        percentual = 0.15;
    }
    if (salario >= 400.01 && salario <= 800.00)
    {
        percentual = 0.12;    
    }
    if (salario >= 800.01 && salario <= 1200.00)
    {
        percentual = 0.10;   
    }
    if (salario >= 1200.01 && salario <= 2000.00)
    {
        percentual = 0.07;
    }
    if (salario > 2000.00)
    {
        percentual = 0.04;        
    }
    reajuste = salario*percentual;
    printf("Novo salario: %.2f\n", salario+reajuste);
    printf("Reajuste ganho: %.2f\n",reajuste);
    printf("Em percentual: %.0f %%\n", (percentual*100));

    
 
 
 
 
    return 0;
}