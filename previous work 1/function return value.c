#include<stdio.h>
int area(int a);
int main()
{   int a;
int r;

    printf("Enter the value of side\n");
    scanf("%d",&a);
    
    printf("the area of the reactangle is %d\n",area (a));
   
   
      return 0;
}
int area(int a)
{   
    int r;
    r=a*a;
    return r;
}