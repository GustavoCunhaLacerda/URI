#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

int main(void){
    int N1, D1, N2, D2;
    int N, D;
    char operacao;
    int q;
    scanf("%d", &q);

    for(int i=0; i<q; i++){
        scanf("%d / %d %c %d / %d", &N1, &D1, &operacao, &N2, &D2);
        getchar();
        switch (operacao)
        {
        case '+':
            N = (N1*D2 + N2*D1);
            D = (D1*D2);
            break;
        case '-':
            N = (N1*D2 - N2*D1);
            D = (D1*D2);
            break;
        case '*':
            N = (N1*N2);
            D = (D1*D2);
            break;
        case '/':
            N = (N1*D2);
            D = (N2*D1);
            break;
        }
        printf("%d/%d = ", N, D);

        int menor;
        if (N<D && N != 0){
            menor = N;
        } 
        else menor = D;
        menor = abs(menor);
        for (int j = menor; j >= 1; j--)
        {
            if (N%j == 0 && D%j == 0)
            {
                N/=j;
                D/=j;
            }
        }

        printf("%d/%d\n", N, D);
        
    }
    return 0;
}