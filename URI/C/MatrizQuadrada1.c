#include <stdio.h>
#include <stdlib.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

int main(void){
    int tam;
    while (1)
    {
        scanf("%d", &tam);
        if (tam == 0)
        {
            return 0;
        }
        
        int m[100][100];
        int ini = 0, fim = tam - 1, inc = 1;

        for (int i = 0; i < tam; i++)
        {
            for(int linha = ini; linha <= fim; linha++){
                for(int coluna = ini; coluna <= fim; coluna++){
                    if (linha == fim || linha == ini || coluna == ini || coluna == fim)
                    {
                        m[linha][coluna] = inc;
                    }
                    
                }
            }
            inc++;
            fim--;
            ini++;
        }
        for(int linha = 0; linha < tam; linha++){
            for(int coluna = 0; coluna < tam; coluna++){
                printf("%3d", m[linha][coluna]);
                if (coluna == tam-1) putchar('\n');
                else putchar(' ');
            }
        }
        putchar('\n');
    }
    return 0;
}