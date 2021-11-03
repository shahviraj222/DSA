#include<stdio.h>
int valid(char *a)
{
    for (int i = 0; a[i] !='\0'; i++)
    {
        // if valid then dont excute this function
        if (!(a[i]>=65 && a[i]<=90) && !(a[i]>=97 && a[i]<=122) && !(a[i]>=48 && a[i]<=57))// the only one is right or return !(1)=0 if valid char so not excuted *if all is not valid then all condition false or !(0)=1 so it is excuted                      
        {
            printf("if statement is runing");
            return 0;
        }
        
    }
    return 1;
    
}
int main()
{
    char c[]="vimalshah";
    if(valid(c))
    {
        printf("your char is valid");
    }
    else
    {
        printf("your char is invalid");
    }
    //this concept is we have to look in 
    if (!(66>=65 && 66<=90) && !(66>=97 && 66<=122) && !(66>=48 && 66<=57))
    {
        printf("if is $$$");
    }
    return 0;
}