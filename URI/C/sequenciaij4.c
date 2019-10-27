#include <stdio.h>

int main()
{
    float i = 0, j = 1, m = 0;
    while(i<=2.2){
        if (i == 0 || i == 1.0)
        {
            printf("I=%.0f J=%.0f\n", i,j);
        }
        else if (i > 1.9){
            printf("I=%.0f J=%.0f\n", i,j);
        }
        else
        {
            printf("I=%.1f J=%.1f\n", i,j);
        }
        
        
        j++;
        m++;
        if (m == 3) m=0, i+=0.2, j-=3, j+=0.2;
        
    }
    return 0;
}
