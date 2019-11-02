#include <stdio.h>

int main()
{
    int d1, d2, h1, h2, m1, m2, s1, s2, tempTotal1, tempTotal2, tempo;

    setbuf(stdin, NULL);
    scanf("Dia %d", &d1);
    scanf("%d : %d : %d", &h1, &m1, &s1);
    getchar();
    setbuf(stdin, NULL);
    scanf("Dia %d", &d2);
    scanf("%d : %d : %d", &h2, &m2, &s2);
    // printf("%d %d %d %d\n", d1, h1, m1, s1);
    // printf("%d %d %d %d\n", d2, h2, m2, s2);


    tempTotal1 = (s2 + m2*60 + h2*60*60 + d2*24*60*60);
    tempTotal2 = (s1 + m1*60 + h1*60*60 + d1*24*60*60);
    tempo = tempTotal1 - tempTotal2;
    // printf("%d\n", tempTotal1);
    // printf("%d\n", tempTotal2);
    // printf("%d\n", tempo);

    printf("%d dia(s)\n", tempo/86400);
    printf("%d hora(s)\n", (tempo%86400)/3600);
    printf("%d minuto(s)\n", ((tempo%86400)%3600)/60);
    printf("%d segundo(s)\n", ((tempo%86400)%3600)%60);

    
    return 0;
}
