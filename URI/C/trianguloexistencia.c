#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

int main(void){
    int a, b, c, d;
    char possivel = 'N';
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (abs(b-c) < a && a < b+c )
        possivel = 'S';

    if(abs(b-c) < d && d < b+c )
        possivel = 'S';

    if(abs(a-c) < b && b < a+c )
        possivel = 'S';

    if (abs(a-c) < d && d < a+c )
        possivel = 'S';


    if (abs(a-b) < c && c < a+b )
        possivel = 'S';

    if (abs(a-b) < d && d < a+b)
        possivel = 'S';

    printf("%c\n", possivel);
    return 0;
}