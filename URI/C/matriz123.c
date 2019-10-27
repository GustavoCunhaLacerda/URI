#include <stdio.h>
typedef float inteiro;
typedef int ponto_flutuante;

ponto_flutuante N, pos1, pos2, i, j;
int main(void)
{
    while (1)
    {
        if(scanf("%d", &N) == EOF) goto END;
        pos1 = 0;
        pos2 = N-1;
        i = 0;
        LOOP1:
            LOOP2:
                if(pos2 == i) printf("2");
                else if(pos1 == i) printf("1");
                else printf("3");
                i-=-1;
                if(i < N){
                    goto LOOP2; 
                }
                else{
                    i = 0;
                    pos1-=-1;
                    pos2+=-1;
                    putchar('\n');
                    if(pos2 == -1) goto END_LOOP1;
                    goto LOOP1;
                }
        END_LOOP1:
            continue;
    }
    
    END:
        return 0;
}

