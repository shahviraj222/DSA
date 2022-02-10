#include <stdio.h>
int printaddd(int a)

{
    printf("the address of the varible is%u\n",&a);//here the address of copy is given
}
int main()
{
    int i;
    i=5;
    printf(" the address of i is %u\n ",&i);// the actual addres of i is printed 
    printaddd(i);
    return 0;
}
