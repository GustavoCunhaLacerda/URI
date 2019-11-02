#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

int main(void){
    int temp1, temp2, temp3;
    scanf("%d %d %d", &temp1, &temp2, &temp3);
    if (temp1 > temp2 && temp2 <= temp3) printf(":)\n");
    
    else if (temp1 < temp2 && temp2 >= temp3) printf(":(\n");
    
    else if (temp1 < temp2 && temp2 < temp3 && (temp3-temp2)<(temp2-temp1)) printf(":(\n");
    
    else if (temp1 < temp2 && temp2 < temp3 && (temp3-temp2)>=(temp2-temp1)) printf(":)\n");
    
    else if (temp1 > temp2 && temp2 > temp3 && (temp2-temp3)<(temp1-temp2)) printf(":)\n");
    
    else if (temp1 > temp2 && temp2 > temp3 && (temp2-temp3)>=(temp1-temp2)) printf(":(\n");
    
    else if (temp1 == temp2){
        if(temp2 < temp3) printf(":)\n");
        else printf(":(\n");
    }
    return 0;
}