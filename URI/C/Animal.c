#include <stdio.h>

void main()
{
    char c1[15], c2[15], c3[15];

    scanf("%[^\n]s", c1);
    getchar();
    scanf("%[^\n]s", c2);
    getchar();
    scanf("%[^\n]s", c3);
    getchar();

    if (c1[0] == 'v')
    {
        if (c2[0] == 'a')
        {
            if (c3[0] == 'c')
            {
                printf("aguia\n");
            }
            else
            {
                printf("pomba\n");
            }
        }
        else
        {
             if (c3[0] == 'o')
            {
                printf("homem\n");
            }
            else
            {
                printf("vaca\n");
            }
        }   
    }
    else
    {
        if (c2[0] == 'i')
        {
            if (c3[2] == 'm')
            {
                printf("pulga\n");
            }
            else
            {
                printf("lagarta\n");
            }
        }
        else
        {
             if (c3[0] == 'h')
            {
                printf("sanguessuga\n");
            }
            else
            {
                printf("minhoca\n");
            }
        }
    }
    
    
    
}
