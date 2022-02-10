#include<stdio.h>
int main()
{
    float a,b,area;
    printf("Enter side of rectangle\n");
    scanf("%f", &a);
    scanf("%f",&b);
    area=0.5*a*b;
    printf("\nthe area of triangle is %f\n",area);
    return 0;
}