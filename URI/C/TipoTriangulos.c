#include <stdio.h>


int main() {
    double a2,b2,c2, a, b, c;
    scanf("%lf %lf %lf", &a2, &b2, &c2);
    if (a2 > b2)
    {
        if (b2 > c2)
        {
            a = a2;
            b = b2;
            c = c2;
           // printf("1\n");
        }
        else
        {
            if (a2 > c2)
            {
                a = a2;
                b = c2;
                c = b2;
               // printf("2\n");
            }
            else
            {
                a = c2;
                b = a2;
                c = b2;
              //  printf("3\n");
            }
        } 
    }
    else
    {
        if (b2 > c2)
        {
            if (a2 > c2)
            {
                a = b2;
                b = a2;
                c = c2;
                //printf("4\n");
            }
            else
            {
                a = b2;
                b = c2;
                c = a2;
               // printf("5\n");
            } 
        }
        else
        {
            a = c2;
            b = b2;
            c = a2;
            //printf("6\n");
        }
        
        
    }
    
    
  
    if (a >= b+c)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {    
        if (a*a == b*b + c*c)
        {
            printf("TRIANGULO RETANGULO\n");        
        }
        if (a*a > b*b + c*c)
        {
            printf("TRIANGULO OBTUSANGULO\n");                
        }
        if (a*a < b*b + c*c)
        {
            printf("TRIANGULO ACUTANGULO\n");                
        }
        if (a == b && a == c && c == b)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if (a == b || a == c || c == b)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    
    //printf("%lf %lf %lf \n", a, b, c);
    
    return 0;
}