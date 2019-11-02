#include <stdio.h>


void main(void)
{
    int etiqueta, qte;
    float preco = 0;
    scanf("%d %d", &etiqueta, &qte);
    switch (etiqueta)
    {
    case 1:
        preco = qte * 4.0;
        break;
    case 2:
        preco = qte * 4.50;
        break;
    case 3:
        preco = qte * 5.0;
        break;
    case 4:
        preco = qte * 2.0;
        break;
    case 5:
        preco = qte * 1.50;
        break;
    default:
        break;
    }
    printf("Total: R$ %.2f\n", preco);

}
