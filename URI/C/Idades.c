#include <stdio.h>
int main() {
    float num = 0, media = 0;
    int i;
    for (i = 0; num >= 0; i++)
    {
        media+=num;
        scanf("%f", &num);
    }
    printf("%.2f\n", media/(float)(i-1));
    return 0;
}