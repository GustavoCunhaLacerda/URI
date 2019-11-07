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
    ulli soma = 0;
    char c;
    scanf("%d", &n);
    getchar();
    while (n --> 0)
    {
        soma = 0;
        while (1)
        {
            c = getchar();
            if (c == '\n')
            {
                goto ENDL1;
            }
            else
            {
                switch (c)
                {
                case '1':
                    soma += 2;
                    break;
                case '2':
                    soma += 5;
                    break;
                case '3':
                    soma += 5; 
                case '4':
                    soma += 4;
                    break;
                case '5':
                    soma+=5;
                    break;
                case '6':
                    soma+=6;
                    break;
                case '7':
                    soma += 3;
                    break;
                case '8':
                    soma += 7;
                    break;
                case '9':
                    soma+=6;
                    break;
                case '0':
                    soma+=6;
                    break;
                }
            }
        }
        ENDL1:
        printf("%lld leds\n", soma);
    }
    
    return 0;
}