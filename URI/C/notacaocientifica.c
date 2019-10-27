#include <stdio.h>

int main(void){
    char e[120];
    double num;
    scanf("%lf", &num);
    sprintf(e, "%lE", num);
    if (e[0] != '-') printf("+");
    printf("%.4lE\n", num);
    return 0;
}