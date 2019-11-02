#include <stdio.h>
int main() {
    int esq, dir;
    while(1){
        scanf("%d %d", &esq, &dir);
        if (esq == dir) break;
        else if (esq>dir) puts("Decrescente");
        else puts("Crescente");
    }
    return 0;
}
