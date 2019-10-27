#include <stdio.h>
#define true 1
#define false 0

int ePrimo(int num){
    if(num == 2) return true;
    if(num == 1 || num%2 == 0) return false;
    for (int i = 3; i < num; i+=2)
    {
        if (num%i == 0) return false;
    }
    return true;
} 

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        if (ePrimo(num) == true) printf("%d eh primo\n", num);
        else printf("%d nao eh primo\n", num);
    }
    
    return 0;
}
