#include<stdio.h>
int function(int *ptr)
{   for (int  i = 1; i < 10; i++)
{
    /* code */


    printf("The value of the element %d is %d\n",i,*ptr);
    ptr++;
}
return 0;
}
int main()
{   int arr[10];
    for (int i = 1; i < 10; i++)
    {
        printf("\nEnter the %d element::",i);
        scanf("%d",&arr[i]);
        
    }
    function(&arr[1]);
    

    return	0;
}