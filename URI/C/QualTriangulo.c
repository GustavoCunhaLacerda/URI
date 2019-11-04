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

int main(void)
{
    // abs(b - c) < a < b + c
    // abs(a - c) < b < a + c
    // abs(a - b) < c < a + b
    ulli a, b, c, maior = 0, tri = 0;
    scanf("%lld", &a);
    if (a > maior)
        maior = a;
    scanf("%lld", &b);
    if (b > maior)
        maior = b;
    scanf("%lld", &c);
    if (c > maior)
        maior = c;
    if (abs(b - c) < a && a < b + c)
    {
        if (abs(a - c) < b && b < a + c)
        {
            if (abs(a - b) < c && c < a + b)
            {
                tri = 1;
            }
        }
    }
    if (tri == 0)
    {
        printf("Invalido\n");
        goto END;
    }
    else
    {
        printf("Valido-");
    }
    if (a == b && b == c)
    {
        printf("Equilatero\n");
    }
    else if (a == b || b == c || a == c)
    {
        printf("Isoceles\n");
    }
    else
    {
        printf("Escaleno\n");
    }
    printf("Retangulo: ");
    if (maior == a)
    {
        if (a * a == b * b + c * c)
            printf("S\n");
        else
            printf("N\n");
    }
    else if (maior == b)
    {
        if (b * b == a * a + c * c)
            printf("S\n");
        else
            printf("N\n");
    }
    else if (maior == c)
    {
        if (c * c == b * b + a * a)
            printf("S\n");
        else
            printf("N\n");
    }

END:
    return 0;
}