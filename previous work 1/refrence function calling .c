#include <stdio.h>
void wrongswap(int a,int b);
void swap(int *a,int *b);
int main()
{   int a=3,b=5;
    printf("The value of a=%d and b=%d\n ",a,b);
    wrongswap(a,b);//here we pass the copy of a and b not the atual value
    // this is call value call
    printf("The value after wrongswap of a=%d and b=%d\n ",a,b);
    swap(&a,&b);//here we passes the adderes of a and b and also we give actuall value of a and b
    //this is call refrention function call 
    printf("The value after swap of a=%d and b=%d\n ",a,b);
    return 0;
}
void wrongswap(int a,int b){
    int temp;
    temp =a;
    a=b;
    b=temp;
}
void swap(int *a,int *b)
{   int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}