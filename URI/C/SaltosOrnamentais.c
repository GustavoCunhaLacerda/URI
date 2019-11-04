#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
// macros 
#define showi(x) printf("%s -> %d\n", #x, x);
#define showf(x) printf("%s -> %f\n", #x, x);
#define shows(x) printf("%s -> %s\n", #x, x);
#define showd(x) printf("%s -> %lf\n", #x, x);
// typedefs
typedef unsigned int uint;
typedef long int lint;
typedef long long int llint;
typedef unsigned long long int ulli;
// bool simulation
#define true 1
#define false 0

int main(void){
    int n;
    scanf("%d", &n);
    getchar();
    while (n --> 0)
    {
        char nome[1000];
        scanf("%[^\n]s", nome);
        getchar();
        float menor = 11, maior = -1, coef;
        float nota, soma=0;
        scanf("%f", &coef);
        for (int i = 0; i < 7; i++)
        {
            scanf("%f", &nota);
            if (nota < menor)
            {
                menor = nota;
            }
            if (nota > maior)
            {
                maior = nota;
            }
            soma+=nota;
        }
        getchar();
        soma -= (maior+menor); 
        soma *=coef;
        printf("%s %.2f\n", nome, soma);
    }
    
    return 0;
}