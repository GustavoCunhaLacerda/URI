#include <stdio.h>

int main()
{
    float num, soma = 0; 
    int qte = 0;
    scanf("%f", &num);
    if(num >0) qte++, soma+=num;
    scanf("%f", &num);
    if(num >0) qte++, soma+=num;
    scanf("%f", &num);
    if(num >0) qte++, soma+=num;
    scanf("%f", &num);
    if(num >0) qte++, soma+=num;
    scanf("%f", &num);
    if(num >0) qte++, soma+=num;
    scanf("%f", &num);
    if(num >0) qte++, soma+=num;
    printf("%d valores positivos\n", qte);
    printf("%.1f\n", soma/qte);

    
    return 0;
}
