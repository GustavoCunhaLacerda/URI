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
    char s[110], count = 0;
    scanf("%[^\n]s", s);
    getchar();
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '1')
        {
            count++;
        }
    }
    if (count%2 != 0)
    {
        strcat(s, "1\0");
    } else {
        strcat(s, "0\0");
    }
    puts(s);
    
    
    return 0;
}