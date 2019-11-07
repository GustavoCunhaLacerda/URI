#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
// macros 
#define showi(x) printf("%s -> %d\n", #x, x);
#define showf(x) printf("%s -> %f\n", #x, x);
#define shows(x) printf("%s -> %s\n", #x, x);
#define showd(x) printf("%s -> %lf\n", #x, x);
// typedefs
typedef unsigned int uint;
typedef long int lint;
typedef long long int llint;
typedef unsigned long long int ulli;
// bool simulation
#define true 1
#define false 0

int main(void){
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        int r, g, b, res;
        char op[10];
        
        scanf("%[^\n]s", op);
        getchar();
        scanf("%d %d %d", &r, &g, &b);
        getchar();
        switch (op[1])
        {
        case 'i':
            res = (r < g) ? r : g;
            res = (res < b) ? res : b;
            break;
        
        case 'a':
            res = (r > g) ? r : g;
            res = (res > b) ? res : b;
            break;
        
        case 'e':
            res = (r+g+b)/3;
            break;
        
        case 'y':
            res = 0.30*r + 0.59*g + 0.11*b;
            break;

        default:
            break;
        }
        printf("Caso #%d: %d\n", i+1, res);
    }
    
    
    return 0;
}