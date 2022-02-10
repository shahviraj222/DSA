#include<stdio.h>
int swap(int *x, int *y)
{
    int temp;
    temp=*y;
    *y=*x;        //if we use y=*x then orignal value 
    *x=temp;     // meaning of *x is value of a means orignal a
    return 0;
}
int main()
{   int a=45,b=89;
    printf("the value of a and b before swaping is a=%d,b=%d\n",a,b);
    swap(&a,&b);  //here address of a and b is given 
    printf("after swaping the value of a=%d and b=%d is",a,b);
    return	0;
}