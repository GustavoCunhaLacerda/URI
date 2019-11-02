#include <stdio.h>
#include <stdlib.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

int main(void){
    int reclamacoes;
    while ( scanf("%d", &reclamacoes) != EOF)
    {
        if (reclamacoes == 0) puts("vai ter copa!");
        else puts("vai ter duas!"); 
    }
    return 0;
}