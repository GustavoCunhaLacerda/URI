#include <stdio.h>

int main() {
    int loop = 1, gremio = 0, inter = 0, empates = 0, grenais = 0;
    int golG, golI;
    while (loop == 1)
    {
        grenais++;
        scanf("%d %d", &golI, &golG);
        if(golI == golG) empates++;
        else if(golI > golG) inter++;
        else if(golG > golI) gremio++;
        puts("Novo grenal (1-sim 2-nao)");
        scanf("%d", &loop);
    }
    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empates);
    if(inter == gremio) puts("Nao houve vencedor");
    else if(inter>gremio) puts("Inter venceu mais");
    else if(gremio>inter) puts("Gremio venceu mais");
 
    return 0;
}