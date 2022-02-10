// #include<stdio.h>
// int main()
// {
//     int a,b,c,d;
//    printf("Enter anyn three numbers\n");
//    scanf("%d",&a);
//      scanf("%d",&a);
//        scanf("%d",&a);
//        if (a>b)
//        {
//            if(a>c)
//            {
//                printf("the number %d is greates",a);
//            }
//            else 
//            {
//                printf("the number %d is greates",c);
//            }
//        }
//        else
//        {
//            if (b>c)
//            {
//                printf("the number %d is greates",b);
//            }
//            else
//            {
//                printf("the number %d is greates",c);
//            }
           
//        }
       
//     return 0;

// }  int a,b,c,d;
//    printf("Enter anyn three numbers\n");
//    scanf("%d",&a);
//      scanf("%d",&a);
//        scanf("%d",&a);
//        if (a>b)
//        {
//            if(a>c)
//            {
//                printf("the number %d is greates",a);
//            }
//            else 
//            {
//                printf("the number %d is greates",c);
//            }
//        }
//        else
//        {
//            if (b>c)
//            {
//                printf("the number %d is greates",b);
//            }
//            else
//            {
//                printf("the number %d is greates",c);
//            }
           
//        }
       
//     return 0;

// }
//                                    THIS IS BEST METHODE TO CALULATE MAX VALUE FROM ANY NUMBER 

#include<stdio.h>
int main()
{
    int a[100];
    printf("How many number you want to give");
    int n,max;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {   int b;
        b=i+1;
        printf("Enter the %d number ",b);
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(int i=1;i<n;i++)
    {
     if(max<a[i])
     {
         max=a[i];
     }
    }
    printf("the max value is %d\n",max);
    return 0;

}




