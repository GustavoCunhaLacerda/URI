#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

int main(void){
    int n;
    char str[1002], aux;
    int str_aux[1002];
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        scanf("%[^\n]s", str);
        getchar();
        int ind = 0;
        int tam = 0;
        for (ind = 0; str[ind] != '\0'; ind++)
        {
            if ((int)str[ind] > 64 && (int)str[ind] < 91)
            {
                str_aux[ind] = ((int)str[ind]+3);
            }
            else if ((int)str[ind] > 96 && (int)str[ind] < 123)
            {
                str_aux[ind] = ((int)str[ind]+3);
            }
            else
            {
                str_aux[ind] = (int)str[ind];
            }
            
            tam++;
        }
        for (int j = 0; j <= tam; j++)
        {
            printf("%c", str_aux[j]);
            
        }
        putchar('\n');
        for (ind = 0; ind < tam/2 + 1; ind++)
        {
            aux = str_aux[ind];
            str_aux[ind] = str_aux[tam-ind];
            str_aux[tam-ind] = aux;
        }
        for (ind = tam/2 + 1; ind <= tam; ind++)
        {
            str_aux[ind] = str_aux[ind]-1;
        }
        // putchar('\n');
        for (int j = 0; j <= tam; j++)
        {
            printf("%c", str_aux[j]);
            
        }
        printf("\n%d", str_aux[5]);
        putchar('\n');
    }
    
    return 0;
}