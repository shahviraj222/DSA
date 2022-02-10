#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("\nTody date is %s\n", __DATE__);
    printf("\nCurrent Time is%s\n", __TIME__);
    printf("\nYour file name is %s \n", __FILE__);
    printf("\nline no %d\n", __LINE__);
    return 0;
}