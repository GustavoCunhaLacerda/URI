#include <stdio.h>
#include <stdlib.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

int main(void){
    float M[12][12];
    float sum = 0;
    int L;
    char T;
    scanf("%d", &L);
    getchar();
    scanf("%c", &T);
    // printf("%d %c\n", L, T);
    for (int linha = 0; linha < 12; linha++)
    {
        for (int coluna = 0; coluna < 12; coluna++)
        {
            setbuf(stdin, NULL);
            scanf("%f", &M[linha][coluna]);
            if (coluna == L)
            {
                sum += M[linha][coluna];
            }
        }
    }
    if(T == 'M') sum/= 12.0;
    printf("%.1f\n", sum);
    return 0;
}