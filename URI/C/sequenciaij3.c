#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 1, j = 8;
    while(i<=9){
        j--;
        printf("I=%d J=%d\n", i,j);
        if (j == i+4)
        {
           j += 5;
           i+=2; 
        }
        
    }
    return 0;
}
