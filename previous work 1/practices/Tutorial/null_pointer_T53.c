#include <stdio.h>
int main()
{
    int a = 19;
    int * P;
    P=&a;
    P=NULL;
    printf("the value of a is %d",*P);//you are not be able to use the value of  null pointer 
    return 0;
}