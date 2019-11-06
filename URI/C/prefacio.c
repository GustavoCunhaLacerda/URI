#include <stdio.h>

int main(void)
{
    int a, b, resto, quuociente;
    scanf("%d %d", &a, &b);
    resto = a%b;
    quuociente = (resto == 0) ? a-(quuociente+1)*b : a/b;
    resto = -(quuociente*b) + a;
    
    printf("%d %d\n", quuociente, resto);
    return 0;












































    
    
    
    }
