#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

//typedef enum Bool {
//	true = 1, false = 0
//} bool;

int main(void){
    double antigo, novo;
    scanf("%lf %lf", &antigo, &novo);
    printf("%.2lf%%\n", ((novo/antigo) * 100) - 100 );
    return 0;
}