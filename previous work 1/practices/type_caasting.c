#include <stdio.h>
int main()
{
    int a = 3;
    printf("%f\n", (float)a);
    float b = 45 / 4;
    float c = (float)45 / 4;
    printf("\n%f\n", b);
    printf("%f", c);
    return 0;
}