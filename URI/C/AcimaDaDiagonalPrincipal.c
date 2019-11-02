#include <stdio.h>
#include <stdlib.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

int main(void){
    float M[12][12];
    float sum = 0;
    int count = 0;
    char T;
    scanf("%c", &T);
    getchar();
    // printf("%d %c\n", L, T);
    for (int linha = 0; linha < 12; linha++)
    {
        for (int coluna = 0; coluna < 12; coluna++)
        {
            setbuf(stdin, NULL);
            scanf("%f", &M[linha][coluna]);
            if (coluna > linha)
            {
                sum += M[linha][coluna];
                count++;
            }
        }
    }
    if(T == 'M') sum/= 66.0;
    printf("%.1f\n", sum);
    return 0;
}