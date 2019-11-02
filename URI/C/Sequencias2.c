#include <stdio.h>

int main() {
    float soma = 1;
    int j = 2, i = 3;
    while(i<=39) 
    {
        soma+= (float)i/(float)j;
        j*=2;
        i+=2;
    }
    printf("%.2f\n", soma);
    return 0;
}