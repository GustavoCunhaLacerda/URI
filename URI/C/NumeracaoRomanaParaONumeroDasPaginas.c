#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

typedef enum Bool {
    true = 1, false = 0
} bool;

int main(void) {
    char unidades[10][5] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    char dezenas[10][5]  = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char centenas[10][5] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    ulli num;
    scanf("%lld", &num);
    int c = num/100;
    int d = (num%100)/10;
    int u = (num%100)%10;
    printf("%s%s%s\n", centenas[c], dezenas[d], unidades[u]);
    return 0;
}

