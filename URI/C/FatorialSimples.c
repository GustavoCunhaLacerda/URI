#include <stdio.h>
typedef unsigned int uint;

uint fat(uint x){
    if (x == 1 || x ==0) return 1;
    return x * fat(x-1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", fat(n));
 
    return 0;
}