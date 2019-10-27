#include <stdio.h>
#include <stdlib.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

int main(void){
    ulli num1, num2;
    while (scanf("%lld", &num1) != EOF && scanf("%lld", &num2))
    {
        printf("%lld\n", num1^num2);
    }
    
    return 0;
}