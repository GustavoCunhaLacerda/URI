#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef unsigned int uint;
typedef unsigned long long int ulli;

int main(void){
    int T;
    char string[20], *subs;
    scanf("%d", &T), getchar();
    for (int i = 0; i < T; i++)
    {
        char sheldon, raaj;
        int winner = -1;
        fgets(string, 20, stdin);
        subs = strtok(string, " ");
        sheldon = subs[2];
        subs = strtok(NULL, " ");
        raaj = subs[2];
        if (sheldon == raaj) printf("Caso #%d: De novo!\n", i+1);
        else if(sheldon == 'd'){
            if (raaj == 'g' || raaj == 's') winner = 0;
            else winner = 1;
        }
        else if(sheldon == 'p'){
            if (raaj == 'o' || raaj == 'd') winner = 0;
            else winner = 1;
        }
        else if(sheldon == 's'){
            if (raaj == 'p' || raaj == 'g') winner = 0;
            else winner = 1;
        }
        else if(sheldon == 'g'){
            if (raaj == 'p' || raaj == 'o') winner = 0;
            else winner = 1;
        }
        else if(sheldon == 'o'){
            if (raaj == 's' || raaj == 'd') winner = 0;
            else winner = 1; 
        }
        if (winner == 0) {
            printf("Caso #%d: Bazinga!\n", i+1);
        }
        else if(winner == 1) {
            printf("Caso #%d: Raj trapaceou!\n", i+1);
        }
    }
    return 0;
}