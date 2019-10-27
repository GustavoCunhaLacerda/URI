#include <stdio.h>
#include <stdlib.h>

int main() {
    float a,b,c,res = 0;
    scanf("%f %f %f", &a, &b, &c);
    if (abs(b - c) < a && a < b + c )
    {
        if (abs(a - c) < b && b < a + c )
        {
            if (abs(a - b) < c && c < a + b )
            {
                res = 1;
            }
            
        }
        
    }
    
    if (res == 0)
    {
        printf("Area = %.1f\n", ((a+b)*c)/2);
    }
    else
    {
        printf("Perimetro = %.1f\n", a+b+c);
    }
    
    
    
    return 0;
}