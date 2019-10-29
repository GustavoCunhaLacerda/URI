#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;
#define true 1
#define false 0

int main(void){
    uint matricula, maior, n;
    float nota, m_nota;
    scanf("%d", &n);
    scanf("%d %f", &matricula, &nota);
    maior = matricula;
    m_nota = nota;

    while (n --> 1)
    {
        scanf("%d %f", &matricula, &nota);
        if (nota > m_nota)
        {
            m_nota = nota;
            maior = matricula;
        }
    }
    if (m_nota < 8)
    {
        puts("Minimum note not reached");
    }
    else
    {
        printf("%d\n", maior);
    }
    return 0;
}