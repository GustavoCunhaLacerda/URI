#include <stdio.h>

int main() {
    float soma = 0;
    for (int i = 1; i <= 100; i++)
    {
        soma+= 1.0/i;
    }
    printf("%.2f\n", soma);
    return 0;
}