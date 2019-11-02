#include <stdio.h>
#include <math.h>


int main()
{
    float dinheiro, aux;
    int notasv[]  = {100, 50, 20, 10, 5, 2};
    int moedasv[] = {100, 50, 25, 10, 5, 1};
    float moedasAUX[] = {1.0, 0.50, 0.25, 0.10, 0.05, 0.01};
    scanf("%f", &dinheiro);

    int parteInteira = (int)dinheiro;
    int parteFracionada = round((dinheiro - parteInteira)*100);

    puts("NOTAS:");
    for (int i = 0; i < 6; i++)
    {
        if (parteInteira >= notasv[i])
        {
            aux = parteInteira;
            parteInteira = parteInteira / notasv[i];
            printf("%d nota(s) de R$ %i.00\n",parteInteira, notasv[i]);
            parteInteira = aux - parteInteira*notasv[i];
        }
        else
        {
            printf("0 nota(s) de R$ %i.00\n", notasv[i]);
        }
    }
    parteFracionada+=parteInteira*100;
    puts("MOEDAS:");
    for (int i = 0; i < 6; i++)
    {
        if (parteFracionada >= moedasv[i])
        {
            aux = parteFracionada;
            parteFracionada = parteFracionada / moedasv[i];
            printf("%d moeda(s) de R$ %.2f\n",parteFracionada, moedasAUX[i]);
            parteFracionada = aux - parteFracionada*moedasv[i];
        }
        else
        {
            printf("0 moeda(s) de R$ %.2f\n", moedasAUX[i]);
        }
    }
    

    return 0;
}
