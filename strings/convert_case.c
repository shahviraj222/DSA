#include<stdio.h>
int main()
{
    char a[]="HAppy diwali";
    for ( int i = 0; a[i] != '\0' ; i++)
    {
        // printf("For is runing");
        if (a[i]>96 && a[i]<123)
        {
            a[i]-=32; //means a[i]=a[i]-32
        }
        
    }
    printf("%s",a);
    
    return 0;
}