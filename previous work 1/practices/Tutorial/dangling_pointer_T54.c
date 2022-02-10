#include <stdio.h>
int *expname()   // here the * is come because you are returing address of a
{
    int a = 234;
    printf("\nThe vlaue of a in function exp is 234");

    return &a; // here i am returing the address of a
}

int main()
{
    int *ptr;    // you thinking that the ptr save the address of a
                 // but  here ptr is dangling because **"a"** is my *local variable it is only
                 // only defined in function exp after the excution of function exp all local
                 // local variable destroyed no longer they are
    ptr=expname(); 
    printf("the value inside in pointer is %d", *ptr);
    return 0;
}
