#include <stdio.h>

int main() {
    int a2,b2,c2, a, b, c;
    scanf("%d %d %d", &a2, &b2, &c2);
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
    printf("%d\n%d\n%d\n", c, b, a);
    printf("\n%d\n%d\n%d\n", a2, b2, c2);

}